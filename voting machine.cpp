#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

class election{
	public:
		bool voterEligibility();
		void generalBodyElection(void);
		void localBodyElection(void);
		void generalBodyVotingResults(void);
		void localBodyVotingResults(void);
	
		struct criteria{
			int age;
			int balletNo;
			struct nadra;
		};
		struct nadra {
			char name[30];
			char fatherName[30];
			char gender;
			char dateOfBirth;
			int CNIC;
			string presentAddress;
			string permanentAddress;
		};
		int candidatesNA[6] = {0, 0, 0, 0, 0, 0}, candidatesPA[6] = {0, 0, 0, 0, 0, 0},
		candidatesMayer[6] = {0, 0, 0, 0, 0, 0}, candidatesCounsler[6] = {0, 0, 0, 0, 0, 0},
		candidatesMinority[6] = {0, 0, 0, 0, 0, 0},candidatesYouth[6] = {0, 0, 0, 0, 0, 0};
};

int main(){
	election elc;
	int isGenralOrLocal;
	bool isEligible;
	char ask, pollAgain;
	do{
		isEligible = elc.voterEligibility();
		system("cls");
		if (isEligible){
			tryAgain:
			cout<<"\nFor general Election press 1.\nFor local Election press 2.\n";
			cin>>isGenralOrLocal;
			system("cls");
			if (isGenralOrLocal==1)
				elc.generalBodyElection();
			else if (isGenralOrLocal==2)
				elc.localBodyElection();
			else{
				cout<<"Invalid Entry! Try again";
				goto tryAgain;
			}
		}
		else
			cout<<"You are inelegible or invalid credentials entered!";
		sleep(2);
		system("cls");
		cout<<"\nThank You!\nTo poll again press 'y': ";
		cin>>pollAgain;
		cout<<"\n\n\n";
	}while(pollAgain == 'y' || pollAgain == 'Y');
	int pin;
	system("cls");
	cout<<"To see the results enter the 'secret 4-digit pin: ";
	cin>>pin;
	if(pin == 1234){
		cout<<"\n\nTo see the results of general body election. Type 'G'\nOr to see the results of local body election. Type 'L':  ";
		cin>>ask;
		system("cls");
		if(ask == 'G' || ask == 'g')
			elc.generalBodyVotingResults();
		else if(ask == 'L' || ask== 'l')
			elc.localBodyVotingResults();
		else
			cout<<"Invalid Entry!";
	}
	else
		cout<<"You have no authority to see the results!";
	return 0;
}
bool election::voterEligibility (){
	criteria person;
	system("cls");
	cout<<"Enter Your age? =";
	cin>>person.age;
	cout<<"Type your ballet no.=";
	cin>>person.balletNo;
	
	if((person.age>=18 && person.age<70) && (person.balletNo == 1111 || person.balletNo == 2222))
		return true;
	else
		return false;
}
void election::generalBodyElection(){
	/*ptiNA = candidatesNA[0], pppNA = candidatesNA[1], pmlnNA = candidatesNA[2],
	anpNA = candidatesNA[3], independentNA = candidatesNA[4], totalVotesNA = candidatesNA[5];
	
	ptiPA = candidatesPA[0], pppPA = candidatesPA[1], pmlnPA = candidatesPA[2],
	anpPA = candidatesPA[3], independentPA = candidatesPA[4], totalVotesPA = candidatesPA[5];*/
	int NAVote, PAVote;
	system("cls");
		cout<<"\n\n\n\t\t~~~Vote for National Assembly Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";	
		cin>>NAVote;
		switch(NAVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesNA[0]++;
				candidatesNA[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesNA[1]++;
				candidatesNA[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesNA[2]++;
				candidatesNA[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesNA[3]++;
				candidatesNA[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesNA[4]++;
				candidatesNA[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		sleep(2);
		//system("cls");
		
		cout<<"\n\n\n\t\t~~~Vote for Provincial  Assembly Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";	
		cin>>PAVote;
		switch(PAVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesPA[0]++;
				candidatesPA[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesPA[1]++;
				candidatesPA[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesPA[2]++;
				candidatesPA[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesPA[3]++;
				candidatesPA[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesPA[4]++;
				candidatesPA[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}	
}
void election::localBodyElection(){
	int mayerVote, counselorVote, youthVote, minorityVote;
		
		system("cls");
		cout<<"\n\n\t\t~~~Vote for Mayer Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
		cin>>mayerVote;
		switch(mayerVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesMayer[0]++;
				candidatesMayer[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesMayer[1]++;
				candidatesMayer[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesMayer[2]++;
				candidatesMayer[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesMayer[3]++;
				candidatesMayer[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesMayer[4]++;
				candidatesMayer[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		sleep(2);
		system("cls");
		cout<<"\n\n\n\t\t~~~Vote for Village Counsler Seat~~~\n";
		cout<<"To Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
		cin>>counselorVote;
		switch(counselorVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesCounsler[0]++;
				candidatesCounsler[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesCounsler[1]++;
				candidatesCounsler[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesCounsler[2]++;
				candidatesCounsler[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesCounsler[3]++;
				candidatesCounsler[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesCounsler[4]++;
				candidatesCounsler[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		sleep(2);
		system("cls");
		cout<<"\n\n\n\t\t~~~Vote for Youth Counsler Seat~~~";
		cout<<"\nTo Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
		cin>>youthVote;
		switch(youthVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesYouth[0]++;
				candidatesYouth[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesYouth[1]++;
				candidatesYouth[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesYouth[2]++;
				candidatesYouth[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesYouth[3]++;
				candidatesYouth[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesYouth[4]++;
				candidatesYouth[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
		sleep(2);
		system("cls");
		cout<<"\n\n\n\t\t~~~Vote for Minority Counsler Seat~~~";
		cout<<"\nTo Vote for PTI press 1.\nTo Vote for PPP press 2.\nTo Vote for PMLN press 3.\nTo Vote for ANP press 4.\nTo Vote for Independent Candidate press 5.\n";
		cin>>minorityVote;
		switch(minorityVote){
			case 1:
				cout<<"You have voted to PTI";
				candidatesMinority[0]++;
				candidatesMinority[5]++;
				break;
			case 2:
				cout<<"You have voted to PPP";
				candidatesMinority[1]++;
				candidatesMinority[5]++;
				break;
			case 3:
				cout<<"You have voted to PMLN";
				candidatesMinority[2]++;
				candidatesMinority[5]++;
				break;
			case 4:
				cout<<"You have voted to  ANP";
				candidatesMinority[3]++;
				candidatesMinority[5]++;
				break;
			case 5:
				cout<<"You have voted to Independent Candidate";
				candidatesMinority[4]++;
				candidatesMinority[5]++;
				break;
			default:
				cout<<"Invalid Entry"; 
		}
}
void election::generalBodyVotingResults(){
	cout<<"\n\n\n\t\tTotal National Assembly Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesNA[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesNA[0]<<"\nPPPP\t\t\t\t\t"<<candidatesNA[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesNA[2]<<
	"\nANP\t\t\t\t\t"<<candidatesNA[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesNA[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
	cout<<"\n\n\t\tTotal Provincial Assembly Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesNA[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesPA[0]<<"\nPPPP\t\t\t\t\t"<<candidatesPA[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesPA[2]<<
	"\nANP\t\t\t\t\t"<<candidatesPA[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesPA[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
}
void election::localBodyVotingResults(){
	cout<<"\n\n\n\t\tTotal Mayer Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesMayer[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesMayer[0]<<"\nPPPP\t\t\t\t\t"<<candidatesMayer[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesMayer[2]<<
	"\nANP\t\t\t\t\t"<<candidatesMayer[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesMayer[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		
	cout<<"\n\n\n\t\tTotal Village Councler Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesCounsler[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesCounsler[0]<<"\nPPPP\t\t\t\t\t"<<candidatesCounsler[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesCounsler[2]<<
	"\nANP\t\t\t\t\t"<<candidatesCounsler[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesCounsler[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
	cout<<"\n\n\n\t\tTotal Youth Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesYouth[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesYouth[0]<<"\nPPPP\t\t\t\t\t"<<candidatesYouth[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesYouth[2]<<
	"\nANP\t\t\t\t\t"<<candidatesYouth[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesYouth[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	
		cout<<"\n\n\n\t\tTotal Minority Candidates are: "<<5<<"\n\t\tTotall Votes Polled: "<<candidatesMinority[5];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Candidate\t\t\t\tVotes";
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"PTI\t\t\t\t\t"<<candidatesMinority[0]<<"\nPPPP\t\t\t\t\t"<<candidatesMinority[1]<<"\nPML(N)\t\t\t\t\t"<<candidatesMinority[2]<<
	"\nANP\t\t\t\t\t"<<candidatesMinority[3]<<"\nINDEPENDENT\t\t\t\t"<<candidatesMinority[4];
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
