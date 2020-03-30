#include <iostream>
using namespace std;

void UVa10141();

int main() {
    UVa10141();

    return 0;
}

void UVa10141(){

    float n, p;

    string line;
    string proposal;
    float price;
    int numberOfRequerimenst;
    int count=0;

    while (true)
    {

        cin>>n>>p;

        if (n==0 and p==0)
            break;

        float maxCompliance = 0;
        string proposalMaxCompliance;
        float priceMaxCompliance;

        for (int i=0; i<=n; i++)
            getline(cin, line);

        for (int i=0; i<p; i++)
        {

            getline(cin, proposal);
            cin>>price>>numberOfRequerimenst;

            if (i==0)
                priceMaxCompliance=price;

            for (int j=0; j<=numberOfRequerimenst; j++)
                getline(cin,line);

            if (numberOfRequerimenst/p>maxCompliance)
            {
                maxCompliance = numberOfRequerimenst/p;
                proposalMaxCompliance = proposal;
                priceMaxCompliance = price;
            }
            if (numberOfRequerimenst/p==maxCompliance and price<priceMaxCompliance)
            {
                maxCompliance = numberOfRequerimenst/p;
                proposalMaxCompliance = proposal;
                priceMaxCompliance = price;
            }
        }

        count++;
        if (count>1) cout<<endl;
        cout<<"RFP #"<<count<<endl<<proposalMaxCompliance<<endl;
    }
}


