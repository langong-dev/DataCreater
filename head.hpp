// You must check this:

const char filename[220]="Filename_";

// end


inline void settime(){
	srand((int)time(NULL));
}

const char con[10]="/dev/tty";
const char inname[5]=".in";
const char outname[5]=".out";
char nowfile_in[220];
char nowfile_out[220];

inline int betrand(int low,int high)
{
	return rand()*1000%(high-low)+low;
}

inline int maxrand(int high)
{
	return rand()*1000%high;
}

inline void changefile(int num)
{
	int n1=num/10;
	int n2=num%10;
	char s1=n1+'0';
	char s2=n2+'0';
	char s[]={s1,s2};
	strcpy(nowfile_in,"data/");
	strcat(nowfile_in,filename);
	strcat(nowfile_in,s);
	strcpy(nowfile_out,nowfile_in);
	strcat(nowfile_in,inname);
	strcat(nowfile_out,outname);
}
