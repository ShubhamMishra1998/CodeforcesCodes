class vector{
	int cs;
	int size;
	int *a;
	vector(){
		cs=0;
		size=1;
		a=new int[size];
	}
	void pushBack(int d){
		if(cs==size){
			int *prev=a;
			a=new int[2*size];
			size=size*2;
			
		}
	}
}