#include <iostream>

using namespace std;


class Box
{
    private:
        int l, b, h;

    public:
        Box()
        {
            l = b = h = 0;
        }

        Box(int length, int breath, int height)
        {
            l = length;
            b = breath;
            h = height;
        }

        Box(Box& B) : l(B.l), b(B.b), h(B.h) {}

        int getLength() const { return l; }
        int getBreath() const { return b; }
        int getHeight() const { return h; }
        long long CalculateVolume() const { return (long long)l * b * h; }

        bool operator< (const Box& box) const
        {
            if (this->l < box.l)
                return true;
            else if (this->l == box.l && this->b < box.b)
                return true;
            else if (this->l == box.l && this->b == box.b && this->h < box.h)
                return true;

            return false;
        }

        friend ostream& operator<< (ostream& output, const Box& box)
        {
            output << box.l << " " << box.b << " " << box.h;
            return output;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
    freopen("04.txt", "r", stdin);

    check2();

    return 0;
}
