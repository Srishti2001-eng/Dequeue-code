#include<stdio.h>
#include<stdlib.h>
#define N 5
int deque[N];
int f=-1,r=-1;

void enqueuefront(int x)
{
    if((f==0 && r==N-1)||(f==r+1))
    {
        printf("Queue is full\n");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        deque[f]=x;
    }
    else if(f==0 )
    {
        f=N-1;
        deque[f]=x;
    }
    else
    {
        f--;
        deque[f]=x;
    }
    
}
void enqueuerear(int x)
{
    if((f==0 && r==N-1)||(f==r+1))
    {
        printf("Queue is full\n");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        deque[r]=x;
    }
    else if (r==N-1)
    {
        r=0;
        deque[r]=x;
    }
    else
    {
        r++;
        deque[r]=x;
    }
}

void display()
{
    int i=f;
    while(i!=r)
    {
        printf("%d<-->",deque[i]);
        i=(i+1)%N;
    }
    printf("%d-->",deque[r]);
}

void getfront()
{
    printf("%d",deque[f]);
}

void getrear()
{
    printf("%d",deque[r]);
}

void dequeuefront()
{
    if(f==-1&&r==-1)
    {
        printf("UNDERFLOW\n");
    }
    else if(f==r)
    {
        f=r=-1;
        printf("%d",deque[f]);
    }
    else if (f==N-1)
    {
        printf("%d",deque[f]);
        f=0;
    }
    else
    {
        printf("%d",deque[f]);
        f++;

    }
}

void dequerear()
{
    if(f==-1&&r==-1)
    {
        printf("UNDERFLOW\n");
    }
    else if(f==r)
    {
        f=r=-1;
        printf("%d",deque[r]);
    }
    else if(r==0)
    {
        printf("%d",deque[r]);
        r=N-1;
    }
    else
    {
        printf("%d",deque[r]);
        r--;
    }
    
}

void input_que()
{	int choice,e;
	do
	{	printf("1.Enqueue front\n");
		printf("2.Dequeue front\n");
		printf("3.Dequeue rear\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{	case 1:printf("Enter your choice:\n");
                   scanf("%d",&e);
                   enqueuefront(e);
			       break;
		    case 2:printf("Element removed:\n");
			    dequeuefront();
			    break;
		   case 3:printf("Elements removed\n");
			    dequerear();
			    break;
		    case 4:printf("Elements are:\n");
			    display();
			    break;
		    case 5:
            break;
		    default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of input_que*/

/*Begin of output_que*/
void output_que()
{	int choice ,x;
	do
	{	printf("1.enqueue front\n");
		printf("2.enqueue rear\n");
		printf("3.dequeue front\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("Enter your choice:\n");
                   scanf("%d",&x);
                   enqueuefront(x);
			       break;
			
		 case 2:printf("Enter your choice:\n");
                   scanf("%d",&x);
                   enqueuerear(x);
			       break;
		 case 3:printf("Elements removed\n");
			    dequerear();
			    break;
		 case 4:printf("Elements are:\n");
			    display();
			    break;
		 case 5:
			break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
/*End of output_que*/

/*Begin of main*/
main()
{	int choice;
	printf("1.Input restricted dequeue\n");
	printf("2.Output restricted dequeue\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1 :
		input_que();
		break;
	 case 2:
		output_que();
		break;
	 default:
		printf("Wrong choice\n");
	}
}