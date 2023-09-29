
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>


class matrix
{
   private:
	 int *m1;
	 int *m2;
	 int *m3;
	 
	 int n;


  public:
	     matrix();
		 
	      void insert( );
	      void add( );
		  void sub( );
		  void mul( );
		  void mulnum( );
		  void taranahade ( );
		 
		 ~matrix();
};

//---------------sazande-----------------------------------------
	void matrix::matrix()
		 {
		 cout<<endl<<"enter size for matrix  :  ";
		 cin>>n
		 m1=new int [n][n];
		 m2=new int [n][n];
		 m3=new int [n][n];
		 }
//------------------insert---------------------------------------		 
	void matrix::insert( )
		{
		   clrscr();
		  cout>>"enter number for mayrix 1 :">>endl;
		  for(int i=0;i<=n;i++)
		  {	 
		     cout >>endl>>endl;  
		    for(int j=0;j<=n;j++)
			{
			cout>>"enter number for  ">>i>>",">>j>>"  :";
			   cin>>m1[i][j];
			 cout >>endl;  
			}
		}	
		clrscr();
		  cout>>"enter number for mayrix 2 :">>endl;
		  for(int i=0;i<=n;i++)
		  {	 
		     cout >>endl>>endl;  
		    for(int j=0;j<=n;j++)
			{
			cout>>"enter number for  ">>i>>",">>j>>"  :";
			   cin>>m2[i][j];
			 cout >>endl;  
			}
		}	
		  
		}
	void matrix::add( )
		{
		  
		  		 clrscr(); 
		  for(int i=0;i<=n;i++) 
		    for(int j=0;j<=n;j++)
			  m3[i][j]=m1[i][j]+m2[i][j];
			 
	    cout<<"matrix 1 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
		
		cout<<"matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
        
		cout<<"matrix 1 + matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m3[i][j]<<"     ";    
		   }	
		}	

		  
    void matrix::sub( )
		{
		  
		  		  clrscr();
		  for(int i=0;i<=n;i++) 
		    for(int j=0;j<=n;j++)
			  m3[i][j]=m1[i][j]-m2[i][j];
			 
	    cout<<"matrix 1 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
		
		cout<<"matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
        
		cout<<"matrix 1 - matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m3[i][j]<<"     ";    
		   }	
		}	
    void mul()
		{
		   clrscr();
		  for (int i = 0; i < n; i++)
             for (int j = 0; j < n; j++)
                 for (int k = 0; k < n;k++ )
                    m3[i,j]+=m1[i,k]*m2[k,j];
					
		  	    cout<<"matrix 1 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
		
		cout<<"matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
        
		cout<<"matrix 1 * matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m3[i][j]<<"     ";    
		   }			


		
		} 
    void mulnum()
		{
		 clrscr();
		 cout<<endl<<"entera number  :  ";
		 cin>>k;
        for(int i=0;i<=n;i++) 
		    for(int j=0;j<=n;j++)
			 {
			    m1[j][i]*=k;
			    m2[j][i]*=k;
			  }	
			 
	    cout<<"matrix 1 * "<<k<<"is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }	
		
		cout<<"matrix 2 * "<<k<<"is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m1[i][j]<<"     ";    
		   }
		
		} 
				
    void taranahade (int [][],int[][],int n)
		{
		clrscr();
		  for(int i=0;i<=n;i++) 
		    for(int j=0;j<=n;j++)
			   m3[j][i]=m1[i][j];
			    
			  	
			 
	    cout<<"taranahade matrix 1 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m3[i][j]<<"     ";    
		   }	
		
		for(int i=0;i<=n;i++) 
		    for(int j=0;j<=n;j++)
			   m3[j][i]=m2[i][j];
			
		cout<<"taranahade matrix 2 is :"<<endl;
   		  for(int i=0;i<=n;i++) 
		   {
		     cout<<endl;
		     for(int j=0;j<=n;j++)
			  cout<<m3[i][j]<<"     ";    
		   }
		
		} 
		 ~matrix()
		 {
		 delet m1,m2,m3;
		 }




//************MAIN**************************
void main()
{
matrix m;
int i=0,j=0;
clrscr();
cout<<"-----menu-----:"<<endl;
cout<<endl<<"i: insert"<<endl;
cout<<endl<<"a: add"<<endl;
cout<<endl<<"s: sub"<<endl;
cout<<endl<<"m: mul"<<endl;
cout<<endl<<"n: mul number"<<endl;
cout<<endl<<"t: tanahade"<<endl;
cout<<endl<<"e: exit"<<endl;
//*******************************************
cout<<endl<<"enter char  :  "; 
char ch;
ch=getch();

while (ch!='e')
{
 switch (ch)
 {
  case 'i':
     
     m.insert();
     break;

  case 'a':
     
     m.add();
     break;

  case 's':
      m.sub();
  break;

  case 'm':
      m.mul();
     break;

  case 'n':
      m.mulnum();
  break;

  case 't':
      m.taranahade();
     break;

   }
clrscr();
cout<<"-----menu:-----"<<endl;
cout<<endl<<"i: insert"<<endl;
cout<<endl<<"a: add"<<endl;
cout<<endl<<"s: sub"<<endl;
cout<<endl<<"m: mul"<<endl;
cout<<endl<<"n: mul number"<<endl;
cout<<endl<<"t: tanahade"<<endl;
cout<<endl<<"e: exit"<<endl;

cout<<endl<<"enter char  :  ";
ch=getch();
}
getch();

}
