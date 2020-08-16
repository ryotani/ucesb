// Function to read the two files and add the friend
#include "LibPerso.C"
void addfriend() {
  cout << " ADDING THE h509 TREE (land02) AS FRIEND OF h101 TREE (UCESB) " << endl;
  cout << " Please, check that Eventno and Evnt coincides at the begginng and end! " << endl;

  char nameRoot[60];

  cout << "Name of the Root File from the UCESB: " << endl;
  cin >> nameRoot;

  TFile *f = new TFile(nameRoot,"read");
  TTree *h101 = (TTree*)f->Get("h101");

  cout << "Name of the Root File from the LAND02: " << endl;
  cin >> nameRoot;

  // Add the second tree to the first tree as a friend
  h101->AddFriend("h509",nameRoot);

}

