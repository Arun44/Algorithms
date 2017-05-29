#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
typedef long long ll;
typedef double d;
typedef pair<d,d> pdd;
typedef vector<d> vd;
typedef vector<pdd> vpdd;
typedef string s;
typedef char c;
#define sz size_t
#define forl(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
ll att[100][100]={0};
class drw
{
    d w,h;d cx,cy,r;d tempr;
    d hh,hl,wl,wr;
    d x1,y1,x2,y2,x3,y3,x4,y4,mx,my;
    d t1,t2,t3,t4,tt1,tt2,tt3,tt4; d xleft,xright,yhigh,ylow;
    vpdd ayy;pdd fer,fer1;ll c1=0;ll c2=1;ll count=0;d az,az1,az2,az3,az4;bool z=false;
    public:
    void gp()
    {
        cin >> w >> h;
        cin >> cx >> cy >> r;//9 6 5
        hh=cy-r;hl=cy+r;
       // cout << hh << " " << hl << endl;
        if(hh>=0)
        { 
           if(hh<h){hh = hh ; }
           else{hh=h-1;}
        }else{ hh=0;}
        if(hl<h)
        {     
            if(hl>=0) {hl=hl;}
            else{hl=0;}  
        }else{ hl=h-1;}
        //cout << hh << " " << hl << endl;
        wl=cx-r;wr=cx+r;
        //cout << wl << " " << wr << endl;
        if(wl>=0)
        {   
             if(wl<w){wl = wl; }
             else{wl=w-1;}    
        } else{wl =0;}
        if(wr<w)
        {   if(wr>=0){wr = wr; }
            else{wr=0;}   
        }else{wr=w-1;}
        //cout << wl << " " << wr << endl;
        for(ll i=hh;i<=hl;i++)
        {
            for(ll k=wl;k<=wr;k++)
            {
                tempr  = (pow((cx-k),2) + pow((cy-i),2));
                tempr = sqrt(tempr);
                //cout << tempr << " ";
                if(tempr<=r)
                {
                     //cout << "united" << endl;
                     att[i][k]=-1;    
                }
            }
          }
        //cout << "AFTER" << endl;
       /* 
        forl(i,0,h)
        {
            forl(k,0,w)
            {
                 if(att[i][k]==0)
                 {
                    cout << "." ;    
                 }
                 else
                 {
                     cout << "#"  ;  
                 }
            }
            cout << endl;
        }*/
        //now for the square;
        cin >> x1 >> y1 >> x3 >> y3;
        mx=(x1+x3)/2;my=(y1+y3)/2;
        t1=(x1-mx);t2=(y1-my);t3=(x3-mx);t4=(y3-my);
        tt1=-t2;tt2=t1;tt3=-t4;tt4=t3;
        x2=mx+tt1;y2=my+tt2;x4=mx+tt3;y4=my+tt4;
       // cout << x2 <<" " <<y2 << " " << x4 << " " << y4 << endl;
        ayy.pb(mp(x1,y1));ayy.pb(mp(x2,y2));ayy.pb(mp(x3,y3));ayy.pb(mp(x4,y4));ayy.pb(mp(x1,y1));
        xleft = MIN(x1,MIN(x2,MIN(x3,x4)));
        xright = MAX(x1,MAX(x2,MAX(x3,x4)));
        yhigh=  MIN(y1,MIN(y2,MIN(y3,y4)));
        ylow = MAX(y1,MAX(y2,MAX(y3,y4)));
        //cout << xleft <<" " << xright <<" " << yhigh << " " << ylow << endl;
        if(yhigh>=0)
        {
           if(yhigh<h){ yhigh=yhigh;}
           else{yhigh=h-1;}   
        }
        else{yhigh=0;}
        if(ylow<h)
        {
           if(ylow>=0){ylow = ylow; }
           else{ylow=0;}   
        }
        else{ylow=h-1;}
        if(xleft>=0)
        {
            if(xleft<w){xleft=xleft; }
             else{xleft=w-1;}    
        }
        else{xleft=0;}
        if(xright<w)
        {
            if(xright>=0){xright=xright;  }
            else{xright=0;}
        }
        else{xright=w-1;}
        //cout << xleft <<" " << xright <<" " << yhigh << " " << ylow << endl;
        //now for filling up the four points;
        
        for(ll i=yhigh;i<=ylow;i++)
        {
          for(ll k=xleft;k<=xright;k++)
           {   
                //ll k=5;ll i=4;
                for(ll t=0;t<4;t++)
                {
                    fer=ayy.at(c1);fer1=ayy.at(c2);
                   // cout << fer.first << " " << fer.second <<" "<< fer1.first << " " << fer1.second << endl;
                    az1 = k*(fer.second-fer1.second);
                    az2 = i*(fer.first-fer1.first);
                    az3 = (fer.first*fer1.second)-(fer.second*fer1.first);
                    //cout << az1 << " "  << az2<<" "<<az3<<" ";
                    az = az1-az2+az3;
                   // cout << az << endl ;
                    c1=c1+1;c2=c2+1;
                    if(az!=0)
                        {
                            if(az>0){count = count+1;}
                            else{count=count-1;}
                        }
                    else{ att[i][k]=-1;z=true;  }
                }
               //cout << endl;
               if(z==false)
               {
                       if((count==4)||(count==-4))
                       {
                            //cout <<"united" << " ";
                            att[i][k]=-1;    
                       }
               }
                 count=0;c1=0;c2=1;z=false;
           }
        }
         forl(i,0,h)
        {
            forl(k,0,w)
            {
                 if(att[i][k]==0)
                 {
                    cout << "." ;    
                 }
                 else
                 {
                     cout << "#"  ;  
                 }
            }
            cout << endl;
        }
    }
};
int main() 
{
    drw w;
    w.gp();
    return 0;
}

