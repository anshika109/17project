#include<iostream>
using namespace std;
int main(){
	int queue[10],choice,i,n,front=-1,rear=-1,data,t,temp;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
		cout<<"1.For Circular Insertion"<<endl;
		cout<<"2.For Circular Deletion"<<endl;
		cout<<"3.exit(0)"<<endl;
		while(t!=-1){
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				int ins_ele,i;
				cout<<"insert the element in queue"<<endl;
				for(i=0;i<n;i++){
				cin>>data;
					if((front==0 && rear==9)||rear==front-1)
					cout<<"overflow"<<endl;
					else if(front==-1){
						front=0;
						rear=0;
						queue[rear]=data;
					}
					else if(rear==9){
						rear=0;
						queue[rear]=data;
					}
					else{
					rear=rear+1;
					queue[rear]=data;
					}
			 }
			     if(rear>=front){
				for(i=front;i<=rear;i++){
					cout<<queue[i];
				}
			}
				else{
					for(i=front;i<=9;i++){
						cout<<queue[i]<<" ";
					}
					for(i=0;i<=rear;i++){
						cout<<queue[i]<<" ";
					}
				}
				break;
				case 2:
				//temp=queue[front];
				if(front==-1)
				cout<<"underflow"<<endl;
				else if(front==rear){
					front=-1;
					rear=-1;
				}
				else if(front==9){
					front=0;
				}
				else
					front=front+1;
					//return temp;
				for(i=front;i<=rear;i++){
						cout<<queue[i]<<" ";
				}
				break;
				case 3:
					exit(0);
				default:
				cout<<"wrong choice"<<endl;
			}
		}
	return 0;
}

