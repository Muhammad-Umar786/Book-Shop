#include<iostream>
#include<conio.h>
#include<fstream>
void heading();
void insert();
void search();
void update();
void Delete();
void Show();
void saveData();

using namespace std;
int ascii=178,i=0;
char ch= ascii;
struct BookShop{
    int id;
    string name;
    string aut_name;
    string pub_name;
    float price;
}b[25];

int main() {
    

    p:
    system("cls");// FOR Screen Clear
    int choice;
    heading();
    cout<<"\n\n "<<ch<<ch<<"1. INSERT BOOK ";
    cout<<"\n\n "<<ch<<ch<<"2. SEARCH BOOK ";
    cout<<"\n\n "<<ch<<ch<<"3. UPDATE  BOOK ";
    cout<<"\n\n "<<ch<<ch<<"4. DELETE BOOK ";
    cout<<"\n\n "<<ch<<ch<<"5. SHOW BOOK ";
    cout<<"\n\n "<<ch<<ch<<"6. EXIT \n\n ";
    for(int i=0; i<=117; i++)
        cout<<ch;
    cout<<"\n\n "<<ch<<ch<<" ENTER YOUR CHOICE .....>>>";
    cin>>choice;
    switch(choice) {
        case 1:
            insert();
            break;
        case 2 :
            search();
            break;
        case 3 :
            update();
            break;
        case 4 :
            Delete();
            break;
        case 5 :
            Show();
            break;
        case 6 :
            saveData();  // Save data to the file before exiting
            exit(0);
        default :
            cout<<"\n\n "<<ch<<ch<<"PLEASE SELECT CORRECT OPTION ";
    }

    getch();
    goto p;
}

void heading() {
    cout<<"\n ";
    for(int m=0; m<=45; m++)
        cout<<ch;
    cout<<" BOOK SHOP PROJECT ";
    for(int m=0; m<=45; m++)
        cout<<ch;
}

void insert() {
    system("cls");
    heading();
    cout<<"\n\n ENTER BOOK ID ";
    cin>>b[i].id;
    cout<<"\n\n ENTER BOOK NAME ";
    cin>>b[i].name;
    cout<<"\n\n ENTER BOOK AUTHOR NAME ";
    cin>>b[i].aut_name;
    cout<<"\n\n ENTER BOOK PUBLISHER NAME ";
    cin>>b[i].pub_name;
    cout<<"\n\n ENTER BOOK PRICE ";
    cin>>b[i].price;
    i++;
    cout<<"\n\n\n "<<ch<<ch<<" NEW BOOK INSERTED SUCCESSFULLY ";

    saveData();  // Save data to the file after each insertion
}

void search(){
	system("cls");
	heading();
	if(i == 0)
	cout<<"\n\n"<<ch<<ch<<" STRUCTURE IS EMPTY "<<ch<<ch;
	else{
		int t_id,found=0;
		cout<<"\n\n ENTER BOOK ID FOR SEARCH ";
		cin>>t_id;
		for(int a=0; a<i; a++){
		if(t_id == b[a].id){
			cout<<"\n\n BOOK NAME "<<b[a].name;
			cout<<"\n\n BOOK AUTHOR NAME "<<b[a].aut_name;
			cout<<"\n\n BOOK PUBLISHER NAME "<<b[a].pub_name;
			cout<<"\n\n BOOK PRICE "<<b[a].price;
			found++;
			break;
	    	}
	    }
	    if(found == 0)
	    cout<<"\n\n\n "<<ch<<ch<<" BOOK ID NOT FOUND ";
    }
}
void update(){
	system("cls");
	heading();
	if(i == 0)
	cout<<"\n\n"<<ch<<ch<<" STRUCTURE IS EMPTY "<<ch<<ch;
	else{
		int t_id,found=0;
		cout<<"\n\n ENTER BOOK ID FOR UPDATE ";
		cin>>t_id;
		for(int a=0; a<i; a++){
		if(t_id == b[a].id){
			cout<<"\n\n ENTER BOOK NAME ";
			cin>>b[a].name;
			cout<<"\n\n ENTER BOOK AUTHOR NAME ";
			cin>>b[a].aut_name;
			cout<<"\n\n ENTER BOOK PUBLISHER NAME ";
			cin>>b[a].pub_name;
			cout<<"\n\n ENTER BOOK PRICE ";
			cin>>b[a].price;
			cout<<"\n\n\n "<<ch<<ch<<" BOOK UPDATED SUCCUSSFULLY "<<ch<<ch;
			found++;
			break;
	    	}
	    }
	    if(found == 0)
	    cout<<"\n\n\n "<<ch<<ch<<" BOOK ID NOT FOUND "<<ch<<ch;
    }
}
void Delete() {
    system("cls");
    
    if (i == 0) {
        cout << "\n\n STRUCTURE IS EMPTY ";
        return;
    }

    int t_id, found = 0;
    cout << "\n\n ENTER BOOK ID TO DELETE: ";
    cin >> t_id;

    for (int a = 0; a < i; a++) {
        if (t_id == b[a].id) {
            for (int k = a; k < i - 1; k++) {
                b[k] = b[k + 1]; // Shift books left
            }
            i--;  // Reduce book count
            found = 1;
            break;
        }
    }

    if (found) {
        cout << "\n\n BOOK DELETED SUCCESSFULLY.";

        // **Overwrite the file with updated records**
        ofstream file("books.txt", ios::trunc); // Open file in truncate mode
        if (file.is_open()) {
            for (int j = 0; j < i; j++) {
                file << b[j].id << " " << b[j].name << " " << b[j].aut_name << " "
                     << b[j].pub_name << " " << b[j].price << endl;
            }
            file.close();
        } else {
            cout << "\n ERROR: Unable to update the file.";
        }
    } else {
        cout << "\n\n BOOK ID NOT FOUND.";
    }
}
void Show(){
	system("cls");
	heading();
	if(i == 0)
	cout<<"\n\n"<<ch<<ch<<" STRUCTURE IS EMPTY "<<ch<<ch;
	else{
		
		for(int a=0; a<i; a++){
		cout<<"\n\n BOOK ID "<<b[a].id;
		cout<<"\n\n BOOK NAME "<<b[a].name;
		cout<<"\n\n BOOK AUTHOR NAME "<<b[a].aut_name;
		cout<<"\n\n BOOK PUBLISHER NAME "<<b[a].pub_name;
		cout<<"\n\n BOOK PRICE "<<b[a].price<<"\n\n";
		for(int m=1; m<=26; m++)
		   	cout<<ch;
	    	}
	    }
	    
    }

void saveData() {
    fstream myFile;
    myFile.open("Ali.txt", ios::out);

    if (myFile.is_open()) {
        for (int a = 0; a < i; a++) {
            myFile <<"\n Book ID:"<< b[a].id << "\n Book Name:" << b[a].name << "\n Author Name:" << b[a].aut_name << "\n Publisher Name:" << b[a].pub_name << "\n Book Price:" << b[a].price;
        }
        myFile.close();
    } else {
        cout << "File not opened";
    }
}



