#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;
void gotoxy(int x,int y)
{
HANDLE h;
COORD c;
c.X=x;
c.Y=y;
h=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(h,c);
}
void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

void hide_cursor()
{
	HANDLE	h_GAME = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME,&cursor_info); 
	cursor_info.bVisible=false;							//����ʾ���
	SetConsoleCursorInfo(h_GAME,&cursor_info); 
}
void display(char*p)
{
	while(true)
	{
	if(*p!=0)
	{
	cout<< *p;
	++p;
	}
	else
	{
		cout<<endl;
		break;
	}
	_sleep(70);
	}
}


class firstgate
{	 
	public:	
	
	 void eraser_1()
		{	
			int c1,c2;
			int x,y;
			string s="�����ǣ�virus";
			x=5;y=5;
			gotoxy(x,y);
			color(15);
			cout<<"��";
			color(7);
			while(true)
				{
					c1=getch();
					c2=getch();
					if(c1==27) break;
					else if(c1==224)
						{	
							gotoxy(x,y);
							cout<<" ";
							if(c2==77)++x;
							if(c2==75)--x;
							if(c2==72)--y;
							if(c2==80)++y;
							if(x==-1)++x;
							if(y==-1)++y;
							if(x==79)--x;
							if(y==25)--y;
							if(x==0&&y==1) 
								{
									gotoxy(20,1);
									cout<<"��ʹ!������������Ϸ�ļ���������׳�"<<endl;
									ofstream file1("readme.txt",ios::out);
									file1<<s<<endl;
									file1.close();

								}
							if(x>4&&x<10)
								{
									if(y==9)
										{	if(c2==80)--y;
											if(c2==72)++y;
											if(c2==75)++x;
											if(c2==77)--x;
										}
								}
							if(x>6&&x<12)
								{
									if(y==5)
										{
											if(c2==80)--y;
											if(c2==72)++y;
											if(c2==75)++x;
											if(c2==77)--x;
										}
								}
							if(x>18&&x<24)
								{
									if(y==10)
										{
											if(c2==80)--y;
											if(c2==72)++y;
											if(c2==75)++x;
											if(c2==77)--x;
										}
								}
							if(x>43&&x<59)
								{
									if(y==10)
										{
										if(c2==80)--y;
										if(c2==72)++y;
										if(c2==75)++x;
										if(c2==77)--x;
										}
								}
							gotoxy(x,y);
							color(15);
							cout<<"��";
							color(7);
						}
				}
		}
	void pig()
		{
			color(78);
			cout<<"�q����r ";
			gotoxy(0,1);
			cout<<"{/ o  o /}";
			gotoxy(1,2);
			cout<<"( (oo) )";
			gotoxy(2,3);
			cout<<"����";
			color(7);
		}
	void oneessay()
	{
		gotoxy(0,4);
		display("welcome!");
		display("����һ����ͷ���㿴������ô��");
		display("�ȱ���������Ϊʲô�����һ����ͷ����֪������֮�ұ��趨Ϊ����򵼡�");
		display("����Ҫ�����﷢���㹻���������������Խ�����һ��");
		display("ÿһ����Ϸ���Ƕ����ر�ģ���Ҳ�����⡪����ʵ˵���ӳ�����˵����Ҹ����󣬲����Ͼ���ӵ���ƻ�����������");
		display("����������ƶ��������ȡ���㹻��������esc�������������һ��");
		display("��������������");
	}
	void stimulate()
	{	
		string c;
		pig();
		oneessay();
		eraser_1();
		gotoxy(10,60);
		cout<<"the pass words is:";
		cin>>c;
		if(c=="virus")
		{	
			gotoxy(10,60);
			cout<<"you can pass to next floor!"<<endl;
			Sleep(500);
			system("cls");
		}
		else
		{	
			system("cls");
			gotoxy(40,12);
			cout<<"you died"<<endl;
			exit(0);
		}
	}
};
class secstage
{	public:
	int x,y,g;int c1,c2;
	int flag,flag2,flag3;
	int u;
	string a;
	char ee;

	int move()
	{
		x=2,y=1;
		flag=0;
		flag2=0;
		flag3=0;
		u=0;
		while(true)
		{
			gotoxy(x,y);
			color(15);
			cout<<a;
			color(7);
			c1=getch();
			if(x==78&&y==23) break;
			if(y==25-u) 
			{	
				system("cls");
				gotoxy(10,5);
				cout<<"you have been killed by the ��virus.";
				exit(0);
			}
			if(x==75&&y==23&&flag2!=1)
			{	
				++u;
				gotoxy(0,25-u);
				cout<<"����������������������������������������";
				gotoxy(0,14);
				cout<<"WARNING:your computer has been invaded by the ��virus.";
				gotoxy(0,15);
				display("���޷����������ڵ�����");
				flag2=1;
			}
			if(x>77&&y==22&&flag3!=1)
			{	
				++u;
				gotoxy(0,25-u);
				cout<<"����������������������������������������";
				gotoxy(0,14);
				cout<<"WARNING:your computer has been invaded by the ��virus.";
				gotoxy(0,15);
				display("���޷����������ڵ�����");
				flag3=1;
			}
			if(c1==97)
			{
				a="��";
				flag=1;
			}
			if(c1==115)
			{
				a="��";
				flag=0;
			}
			if(c1==224&&y!=13)
			{
				c2=getch();
				gotoxy(x,y);
				cout<<"  ";
				if(y==12&&flag==0)
				{
					if(c2==80)--y;
				}
				if(y==14&&flag==0)
				{
					if(c2==72)++y;
				}

				switch(c2)
				{
					case(72): if(y>0) --y;break;
					case(80): if(y<24-u) ++y;break;
					case(75): if(x>0) --x;break;
					case(77): if(x<78) ++x;break;
		
				}
		
			}
			if(c1==224&&flag==1&&y==13)
			{
				c2=getch();
				gotoxy(0,y);
				cout<<"��������������������������������������������������������������������������������";
				switch(c2)
				{
					case(72): if(y>0) --y;break;
					case(80): if(y<25) ++y;break;
				}
			}
		}
		return u;
	}
	int stimulate()
	{
		int uu=0;
		a="��";
		gotoxy(0,12);
		cout<<"��Firewall��Aiti the �� virus and protect the improtant �� files. ";
		gotoxy(0,13);
		cout<<"��������������������������������������������������������������������������������";
		gotoxy(76,23);
		cout<<"���";
		gotoxy(78,22);
		cout<<"��";
		gotoxy(0,0);
		display("�ڵڶ�������αװ����������a��Ϊ���s���ԭò����Щ�ط�ֻ��αװ��ͨ��");
		display("�����ǳ���");
		gotoxy(55,24);
		cout<<"�����Ǵ�������ڻ�üӷ�";
		uu=move();
		system("cls");
		gotoxy(40,22);
		cout<<"you can pass to the next floor!";
		gotoxy(5,15);
		display("because you have killed  ��,you lost the ability to transform to ��");
		system("cls");
		return uu;
	}
};
class lastgate
{
public:
vector <COORD> a;
void timer(clock_t &t,int tt,int &x,int &y)
{
	if(clock()-t>tt)
	{
		gotoxy(x,y);
		cout<<"  ";
		++x;
		if(x>77)x=0;
		gotoxy(x,y);
		cout<<"��";
        COORD temp1;
		temp1.X=x;
		temp1.Y=y;
		a.push_back(temp1);
		tt=tt-10;
		t=clock();//���¼�ʱ
	}
}

int tuichu(int x1,int y1,int x2,int y2,int x3,int y3,int u)
{
	string s,s2;
	int ii;
		s2="  ����������С���һЩ�ϻ��������ɾ�����ĵ�ȫ����Щ�������롰�Ҷ�����Ϸ�������Ȥ����������Ϸ�����µĽ��";
		s="  ��֪������һ��������Ӵ������ȡʤ�������������ò�����ռϵͳ��С��Ϸ�����һ�عش���ʶ�Լ��ǲ���������ѡ������ͬ\n�������ָо���������д�����ĵ���ʾ��Ӣ�ĵ�ϵͳ��ʾ����ʾ�������������ʾ�ˣ����������Ǽƻ�ÿɱ��һ����������Ļ����һ\n���޷�ͨ��������Ӵ���Ϸ�Ѷ����ȫ�����룬Դ������Ҳ�����ÿһ����������������˼�¼����ϧ���û�о�����������Ĺؿ�\nֻ�á�����ɱ���ˣ��ڶ�����ɱ����˳��仯�ᵼ����Ϸ�޷�����Ҳ��������Ϊ֮����ƣ���ϧ���治����������������ռȫ����\n�뷨��\n  ���������ҷ��������������ף�����������ܵ���������ʦ���������û��ʵ�֣����������˶���������ȥ���ϸ��˰���Ÿ㶨\n��Ȼ���������ж�ʵ����̫���ۣ�������˺þá���������û�ɹ���ֻ��˵һ������������--����һ�����յ�������Ǽ�ʱ��̫�࣬\n����һ�����������ڼ����������˲���������һ����ֱ�Ӽ����������������м�ʱ����whileѭ����ϧʧ���ˣ�Ҳ����˵��Ϸ��һ��\n����ȥ�ˣ�����ֻ�ܽ����ˣ�����֮�����������������Ϸ�����Ԥ����˺ö࣬�ܶ��뷨�������޷�ʵʩ��ȴ�����Һܶ�ʱ�䣬��\n��������һ��֮�����Ļ��ǱȽ��ж����ġ���ʹ�����˸�ֻ���Լ�֪����ʲô�������ϷҲͦ����ġ�\n  ���⣬��һ�ص���ͷҲ�Եò��������ˣ�������������γ��ֵģ�����ͨ����ʱ��ʵ�������˶�����һ��boss������֮����������\n��--��ֻ��������ſ�ܡ���������Ĵ���Ҳ����ȫ�������Ϸ��ܵĽ������顣";
	
		if((x1==x2&&y1==y2)||(x1==x3&&y1==y3))
			{
				gotoxy(0,24-u);
				cout<<"�����������������������������������������";
				++u;
			}
		
		if(u>24)
		{	
			system("cls");
			display("you have break dowm your computer successfully!");
			for(int i=0;i<1000;++i)cout<<"��";
			display("�㲻��ŷ�������ݵ��Ǹ������ɣ�̫�������Ѿ�%��%��#�������x妶����Y��%��%����ᦁ����F��");
				for(i=0;i<500;++i)
				cout<<"WORNING:can't find the important file ��,��has dominited your system"<<endl;
				cout<<"Press any key to continue";
				_sleep(1000);
				ofstream file1("readme.txt",ios::out);
				file1<<s2<<endl;
				file1<<s<<endl;
				file1.close();
				ii=getch();
				ii=getch();
				ii=getch();
				display("�⻹���ǽ���Ӵ��������ȥ�����ļ����µ�readme.txt��");
			exit(0);
		
		}
	return u;	
	
}

void move2(clock_t &t3,int tt,int &x,int &y)
{
	int c1,c2;
	while(kbhit())//�а���
	{
		c1=getch();
		if(c1==27) exit(0);//ESC
		if(c1==224)		//SPACE
		{
				c2=getch();
				gotoxy(x,y);//���������
				cout<<"  ";
				if(c2==72)
				if(y>0)--y;
				if(c2==80)
				if(y<1)++y;
				gotoxy(x,y);//���������
				cout<<"��";
		}
	
		
	} 
			
	
}
			
void stimulate(int u)
{	
	int x1=10,y1=1;
	int x2=40,y2=1;
	int y3=0,x3=1;
	display("��������������ʤ����Ŷ");
	system("cls");
	if(u>0)
		{
			for(int i=0;i<u;++i)
			{
				gotoxy(0,24-i);
				cout<<"�����������������������������������������";
			}
		}
	gotoxy(x2,y2);
	color(15);
	cout<<"��";
	color(7);
	clock_t t1=clock();//t1 ��ʼ��ʱ
	clock_t t2=clock();//t2��ʼ��ʱ
	clock_t t3=clock();//t3��ʼ��ʱ
	clock_t t4=clock();
	while(true)
	{
		timer(t4,40,x3,y3);
		timer(t1,70,x1,y1);
		move2(t3,30,x2,y2);
		u=tuichu(x2,y2,x1,y1,x3,y3,u);
			
	}
}
};
class tirdstage
{
public:
	int xa,ya;//����
	clock_t t;//��ʱ��
        clock_t t1;
		clock_t t2;
		clock_t t3;
		clock_t t4;
		clock_t t5;
	int tt1,tt,tt2,tt4,tt5;//��ʱ��ʱ����
	int n,c;
	vector <COORD> a;
public:
	tirdstage()
	{
		xa=3,ya=2;
		tt1=80;
		tt2=90;
		n=0;
		c=0;
	}
	void timer()
	{
		if(clock()-t>tt1)
		{
			for(int i=0;i<a.size();++i)
			{
				//erase
//				if(a[i].Y>0)//ͣ���ڱ߽�
//					{
					gotoxy(a[i].X,a[i].Y);
					cout<<"  ";
//				}
				//draw,�߽��ж�,����任
				if(a[i].Y>0)
				{
					--a[i].Y;
					gotoxy(a[i].X,a[i].Y);
					cout<<"��";
				}
				else 
				{
					a.erase(&a[i]);//ɾ��Ԫ��
				}
			}
			if((a[i].X==xa||a[i].X==xa-1)&&(a[i].Y==ya||a[i].Y==ya+1))
			{cout<<"you died!";
			exit(0);
			}
		//���¼�ʱ
		t=clock();
		}
	}
	void npcmove(clock_t &t,int tt,int &x,int &y)
	{
	
			if(clock()-t>tt)
			{	
				gotoxy(x,y);
				cout<<"  ";
				srand((unsigned)time(NULL));
				c=rand()%9;
				switch(c)
				{
					case 1:if(y>0)--y;break;
					case 2:if(y<24-1)++y;break;
					case 3:if(x>0)--x;break;
					case 4:if(x<78)++x;break;
					case 5:if(y<24-1)++y;break;
					case 6:if(x<78)++x;break;
					case 7:if(y>0)--y;break;
					case 8:if(x>0)--x;break;
				}
				srand((unsigned)time(NULL));
				gotoxy(x,y);
				color(14);
				cout<<"��";
				color(7);
				if(x==xa&&y==ya)
				{
				cout<<"you died!";
				exit(0);
				}
		                t=clock();
			}
			
	}
	void shooter(clock_t &t,int tt2,int &x,int &y)
	{	
		if(clock()-t>tt2)
		{
			gotoxy(x,y);
			cout<<"    ";
			++x;
			if(x>77)x=0;
			gotoxy(x,y);
			cout<<"��";
			COORD temp;
				temp.X=x;temp.Y=y-1;
				a.push_back(temp);
			t=clock();
		}
	
	
	}

	void move(int u)
	{
		int c1,c2;
		int i,ii;
		while(kbhit())//�а���
		{
			if(xa==78&&ya==22) 
			{
				system("cls");
				lastgate f;
				f.stimulate(u);
				
			}
			c1=getch();
			if(c1==224)
			{
				gotoxy(xa,ya);
				cout<<"  ";
				c2=getch();
				switch(c2)
				{
					case 72:if(ya>0)--ya;break;//up
					case 80:if(ya<24-u)++ya;break;//down
					case 75:if(xa>0)--xa;break;//left
					case 77:if(xa<78)++xa;break;//right
				}
				gotoxy(xa,ya);//���������
				color(15);
				cout<<"��";
				color(7);
			}
		}
	}	
	int stimulate(int u)
	{	
		int bb;
		gotoxy(3,2);
		display("��ɫ�ĵ����޷���Ĩɱ�����ڵ��͵��˽ӽ��м���������");
		display("the Defense device is beginning................");
		system("cls");
		int xx1=20,xx2=5,xx3=22,xx4=50,xx5=30;
		int yy1=10,yy2=15,yy3=24-u,yy4=17,yy5=3;
		gotoxy(78,22);
		cout<<"��";
		gotoxy(xa,ya);
		color(15);
		cout<<"��";
		color(7);
		if(u>0)
		{
			for(int i=0;i<u;++i)
			{
				gotoxy(0,24-i);
				cout<<"�����������������������������������������";
			}
		}
		t=clock();//t1��ʼ��ʱ
		while(true)
		{	
			npcmove(t1,50,xx1,yy1);
			npcmove(t2,120,xx2,yy2);
			npcmove(t4,200,xx4,yy4);
			npcmove(t5,80,xx5,yy5);
			timer();
			shooter(t3,1000,xx3,yy3);
			move(u);
		}
		return u;
	}
};
class game
{
protected:
	int x,y;//����
	clock_t t;
	clock_t t1;//��ʱ��
	int tt,tt1;//��ʱ��ʱ����
	int n;
	int c;
	int q;
	vector <int> a;
public:
	game()
	{
		x=0,y=10;
		tt=1000;
		n=0;
		c=0;
		q=0;
	}
	void timer()
	{
		if(clock()-t>tt)
		{
		
			color(7);
			gotoxy(0,1);
			cout<<"ʱ�䣺"<<n;
			n++;
		//���¼�ʱ
			t=clock();
		}
	}	

	void move()
	{
		int c1,c2;
		int temp=1;
		while(kbhit())//�а���
		{
			c1=getch();
				if(c1==224)		
				{
				
					a.push_back(temp);
					gotoxy(70,1);
					cout<<"������"<<a.size();
					gotoxy(x,y);
					cout<<"��";
					c2=getch();
					if(c2==77)x=x+2;
					if(c2==75)x=x-2;
					if(c2==80)y=y+1;
					if(c2==72)y=y-1;
					if(x>44)x=0;
					if(x<0)x=44;
					if(y>24)y=4;
					if(y<4)y=24;
					gotoxy(x,y);
					color(103);
					cout<<"��";
					color(7);
				
				}
		}
	}
	void suiji()
	{	
		int cx,cy;
		cy=5;
		srand((unsigned)time(NULL));
		for(int i=0;i<7;++i)
		{
			cx=rand()%10;
			gotoxy(cx*2,cy);
			cout<<"��";
			cy=cy+3;

		}
	}
	void key()
	{	
		color(13);
		display("��л֧�֣���Ϊ���زʵ������ơ��ھ����ٵĲ�����ʱ��������ȫ���ġ�");
		display("��Ҳ���԰����������һ��������ǣ������Ǹ��ʵ����ұ�������������ɹؿ���һ�ʻ�����Ϸ����--������");
		display("                ");
		color(7);
		system("cls");
		for(int i=0;i<21;++i)
		{
		gotoxy(0,i+4);
		cout<<"������������������������";
		}
		suiji();
		gotoxy(0,10);
		cout<<"��";
		t=clock();//t1��ʼ��ʱ
		while(true)
		{
			timer();
			move();
		}
	}
};

int main()
{	
	string s;
	int luanma=0;
	hide_cursor();
	ifstream file1 ("readme.txt",ios::in);
	file1>>s;
	file1.close();
	if(s=="�Ҷ�����Ϸ�������Ȥ")
	{
		game h;
		h.key();
	}
	else
	{
		firstgate d;
		secstage f;
		d.stimulate();
		luanma=f.stimulate();
		tirdstage g;
		luanma=g.stimulate(luanma);
	}
	return 0;
}