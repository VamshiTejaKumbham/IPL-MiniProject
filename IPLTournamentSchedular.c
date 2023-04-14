#include<stdio.h>
#include<string.h>
struct player_details{
    char *player_name;
    char *specialisation;
};
struct teams{
    char *team_name;
    struct player_details players[20];
};

struct team{
    char name[20];
};
struct match {
    struct team team1;
    struct team team2;
    char dayTime[50];
};

void main(){
  int n=10;
  struct teams t[15];
// Team 1
  t[0].team_name="RCB";

  t[0].players[0].player_name="Virat Kohli";
  t[0].players[0].specialisation="Batter";

  t[0].players[1].player_name="Faf Du Plessis";
  t[0].players[1].specialisation="Captain - Batter";

  t[0].players[2].player_name="Dinesh Karthik";
  t[0].players[2].specialisation="Wicket Keeper - Batter";

  t[0].players[3].player_name="Finn Allen";
  t[0].players[3].specialisation="Batter";
  
  t[0].players[4].player_name="Rajat Patidar";
  t[0].players[4].specialisation="Batter";
  
  t[0].players[5].player_name="Suyash S Prabhudessai";
  t[0].players[5].specialisation="Batter";
  
  t[0].players[6].player_name="Glenn Maxwell";
  t[0].players[6].specialisation="All-Rounder";

  t[0].players[7].player_name="David Willey";
  t[0].players[7].specialisation="All-Rounder";
  
  t[0].players[8].player_name="Mohammed Siraj";
  t[0].players[8].specialisation="Bowler";
  
  t[0].players[9].player_name="Shahbaz Ahamad";
  t[0].players[9].specialisation="Bowler";
  
  t[0].players[10].player_name="Harshal Patel";
  t[0].players[10].specialisation="Bowler";  
  
  t[0].players[11].player_name="Akash Deep";
  t[0].players[11].specialisation="Bowler";
  
  t[0].players[12].player_name="Wanindu Hasaranga";
  t[0].players[12].specialisation="All-Rounder";
  
  t[0].players[13].player_name="Karn Sharma";
  t[0].players[13].specialisation="All-Rounder";
  
  t[0].players[14].player_name="Anuj Rawat";
  t[0].players[14].specialisation="Batter";
  
  t[0].players[15].player_name="Will Jacks";
  t[0].players[15].specialisation="Batter";
  
  t[0].players[16].player_name="Mahipal Lomror";
  t[0].players[16].specialisation="All-Rounder";
  
  t[0].players[17].player_name="Micheal Bracewell";
  t[0].players[17].specialisation="All-Rounder";
  
  t[0].players[18].player_name="Sonu Yadav";
  t[0].players[18].specialisation="All-Rounder";
  
  t[0].players[19].player_name="Manoj Bhandage";
  t[0].players[19].specialisation="All-Rounder";

// Team 2
  t[1].team_name="MI";

  t[1].players[0].player_name="Rohit Sharma";
  t[1].players[0].specialisation="Captain - Batter";

  t[1].players[1].player_name="Dewald Brevis";
  t[1].players[1].specialisation="Batter";

  t[1].players[2].player_name="Suryakumar Yadav";
  t[1].players[2].specialisation="Batter";

  t[1].players[3].player_name="Ishan Kishan";
  t[1].players[3].specialisation="Wicket keeper - Batter";

  t[1].players[4].player_name="N. Tilak Varma";
  t[1].players[4].specialisation="Batter";

  t[1].players[5].player_name="Ramandeep Singh";
  t[1].players[5].specialisation="Batter";

  t[1].players[6].player_name="Tim David";
  t[1].players[6].specialisation="Batter";

  t[1].players[7].player_name="Tristan Stubbs";
  t[1].players[7].specialisation="Batter";

  t[1].players[8].player_name="Vishnu Vinod";
  t[1].players[8].specialisation="Batter";

  t[1].players[9].player_name="Arjun Tendulkar";
  t[1].players[9].specialisation="All-Rounder";

  t[1].players[10].player_name="Jofra Archer";
  t[1].players[10].specialisation="All-Rounder";

  t[1].players[11].player_name="Mohd. Arshad Khan";
  t[1].players[11].specialisation="All-Rounder";

  t[1].players[12].player_name="Cameron Green";
  t[1].players[12].specialisation="All-Rounder";

  t[1].players[13].player_name="Shams Mulani";
  t[1].players[13].specialisation="All-Rounder";

  t[1].players[14].player_name="Nehal Wadhera";
  t[1].players[14].specialisation="All-Rounder";

  t[1].players[15].player_name="Duan Jansen";
  t[1].players[15].specialisation="All-Rounder";

  t[1].players[16].player_name="Hrithik Shokeen";
  t[1].players[16].specialisation="Bowler";

  t[1].players[17].player_name="Jasprit Bumrah";
  t[1].players[17].specialisation="Bowler";

  t[1].players[18].player_name="Jhye Richardson";
  t[1].players[18].specialisation="Bowler";

  t[1].players[19].player_name="Kumar Kartikeya Singh";
  t[1].players[19].specialisation="Bowler";

//  Team 3
t[2].team_name="CSK";

t[2].players[0].player_name="Mahendra Singh Dhoni";
t[2].players[0].specialisation="Wicket Keeper - Captain - Batter";

t[2].players[1].player_name="Devon Conway";
t[2].players[1].specialisation="Batter";

t[2].players[2].player_name="Ruturaj Gaikwad";
t[2].players[2].specialisation="Batter";

t[2].players[3].player_name="Subhranshu Senapati";
t[2].players[3].specialisation="Batter";

t[2].players[4].player_name="Ambati Rayudu";
t[2].players[4].specialisation="Batter";

t[2].players[5].player_name="Ajinkya Rahane";
t[2].players[5].specialisation="Batter";

t[2].players[6].player_name="Shaik Rasheed";
t[2].players[6].specialisation="Batter";

t[2].players[7].player_name="Ravindra Jadeja";
t[2].players[7].specialisation="All-Rounder";

t[2].players[8].player_name="Dwaine Pretorius";
t[2].players[8].specialisation="All-Rounder";

t[2].players[9].player_name="Mitchell Santner";
t[2].players[9].specialisation="All-Rounder";

t[2].players[10].player_name="K Bhagath Varma";
t[2].players[10].specialisation="All-Rounder";

t[2].players[11].player_name="Moeen Ali";
t[2].players[11].specialisation="All-Rounder";

t[2].players[12].player_name="Shivam Dube";
t[2].players[12].specialisation="All-Rounder";

t[2].players[13].player_name="Ben Stokes";
t[2].players[13].specialisation="All-Rounder";

t[2].players[14].player_name="Nishant Sindhu";
t[2].players[14].specialisation="All-Rounder";

t[2].players[15].player_name="Ajay Mandal";
t[2].players[15].specialisation="All-Rounder";

t[2].players[16].player_name="Akash Singh";
t[2].players[16].specialisation="Bowler";

t[2].players[17].player_name="Rajvardhan Hangargekar";
t[2].players[17].specialisation="Bowler";

t[2].players[18].player_name="Deepak Chahar";
t[2].players[18].specialisation="Bowler";

t[2].players[19].player_name="Maheesh Theekshana";
t[2].players[19].specialisation="Bowler";

// Team 4
t[3].team_name="GT";

t[3].players[0].player_name="David Miller";
t[3].players[0].specialisation="Batter";

t[3].players[1].player_name="Shubman Gill";
t[3].players[1].specialisation="Batter";

t[3].players[2].player_name="Matthew Wade";
t[3].players[2].specialisation="Batter";

t[3].players[3].player_name="Wriddhiman Saha";
t[3].players[3].specialisation="Wicket keeper - Batter";

t[3].players[4].player_name="Kane Williamson";
t[3].players[4].specialisation="Batter";

t[3].players[5].player_name="Urvil Patel";
t[3].players[5].specialisation="Batter";

t[3].players[6].player_name="K.S Bharat";
t[3].players[6].specialisation="Batter";

t[3].players[7].player_name="Hardik Pandya";
t[3].players[7].specialisation="Captain - All-Rounder";

t[3].players[8].player_name="Abhinav Manohar";
t[3].players[8].specialisation="All-Rounder";

t[3].players[9].player_name="B. Sai Sudharsan";
t[3].players[9].specialisation="All-Rounder";

t[3].players[10].player_name="Darshan Nalkande";
t[3].players[10].specialisation="All-Rounder";

t[3].players[11].player_name="Vijay Shankar";
t[3].players[11].specialisation="All-Rounder";

t[3].players[12].player_name="Odean Smith";
t[3].players[12].specialisation="All-Rounder";

t[3].players[13].player_name="Dasun Shanaka";
t[3].players[13].specialisation="All-Rounder";

t[3].players[14].player_name="Jayant Yadav";
t[3].players[14].specialisation="Bowler";

t[3].players[15].player_name="Pradeep Sangwan";
t[3].players[15].specialisation="Bowler";

t[3].players[16].player_name="Rahul Tewatia";
t[3].players[16].specialisation="Bowler";

t[3].players[17].player_name="Shivam Mavi";
t[3].players[17].specialisation="Bowler";

t[3].players[18].player_name="Alzarri Joseph";
t[3].players[18].specialisation="Bowler";

t[3].players[19].player_name="Mohammad Shami";
t[3].players[19].specialisation="Bowler";

// Team 5
t[4].team_name="KKR";
t[4].players[0].player_name="Nitish Rana";
t[4].players[0].specialisation="Captain - Batter";

t[4].players[1].player_name="Rinku Singh";
t[4].players[1].specialisation="Batter";

t[4].players[2].player_name="Rahmanullah Gurbaz";
t[4].players[2].specialisation="Batter";

t[4].players[3].player_name="Shreyas Iyer";
t[4].players[3].specialisation="Batter";

t[4].players[4].player_name="Narayan Jagadeesan";
t[4].players[4].specialisation="Wicket keeper - Batter";

t[4].players[5].player_name="Litton Das";
t[4].players[5].specialisation="Batter";

t[4].players[6].player_name="Mandeep Singh";
t[4].players[6].specialisation="Batter";

t[4].players[7].player_name="Jason Roy";
t[4].players[7].specialisation="Batter";

t[4].players[8].player_name="David Wiese";
t[4].players[8].specialisation="All-Rounder";

t[4].players[9].player_name="Anukul Roy";
t[4].players[9].specialisation="All-Rounder";

t[4].players[10].player_name="Andre Russell";
t[4].players[10].specialisation="All-Rounder";

t[4].players[11].player_name="Venkatesh Iyer";
t[4].players[11].specialisation="All-Rounder";

t[4].players[12].player_name="Shakib Al Hasan";
t[4].players[12].specialisation="All-Rounder";

t[4].players[13].player_name="Suyash Sharma";
t[4].players[13].specialisation="Bowler";

t[4].players[14].player_name="Kulwant Khejroliya";
t[4].players[14].specialisation="Bowler";

t[4].players[15].player_name="Lockie Ferguson";
t[4].players[15].specialisation="Bowler";

t[4].players[16].player_name="Umesh Yadav";
t[4].players[16].specialisation="Bowler";

t[4].players[17].player_name="Harshit Rana";
t[4].players[17].specialisation="Bowler";

t[4].players[18].player_name="Tim Southee";
t[4].players[18].specialisation="Bowler";

t[4].players[19].player_name="Shardul Thakur";
t[4].players[19].specialisation="Bowler";

// Team 6
t[5].team_name="DC";
t[5].players[0].player_name="Rishabh Pant";
t[5].players[0].specialisation="Batter";

t[5].players[1].player_name="David Warner";
t[5].players[1].specialisation="Captain - Batter";

t[5].players[2].player_name="Prthivi Shaw";
t[5].players[2].specialisation="Batter";

t[5].players[3].player_name="Rovman Powell";
t[5].players[3].specialisation="Batter";

t[5].players[4].player_name="Ripal Patel";
t[5].players[4].specialisation="Batter";

t[5].players[5].player_name="Sarfaraz Khan";
t[5].players[5].specialisation="Batter";

t[5].players[6].player_name="Yash Dhull";
t[5].players[6].specialisation="Batter";

t[5].players[7].player_name="Aman Khan";
t[5].players[7].specialisation="Batter";

t[5].players[8].player_name="Phil Salt";
t[5].players[8].specialisation="Wicket keeper - Batter";

t[5].players[9].player_name="Manish Pandey";
t[5].players[9].specialisation="Batter";

t[5].players[10].player_name="Rilee Rossouw";
t[5].players[10].specialisation="Batter";

t[5].players[11].player_name="Abhishek Porel";
t[5].players[11].specialisation="Batter";

t[5].players[12].player_name="Axar Patel";
t[5].players[12].specialisation="All-Rounder";

t[5].players[13].player_name="Lalit Yadav";
t[5].players[13].specialisation="All-Rounder";

t[5].players[14].player_name="Mitchel Marsh";
t[5].players[14].specialisation="All-Rounder";

t[5].players[15].player_name="Kamlesh Nagarkoti";
t[5].players[15].specialisation="Bowler";

t[5].players[16].player_name="Pravin Dubey";
t[5].players[16].specialisation="Bowler";

t[5].players[17].player_name="Vicky Ostwal";
t[5].players[17].specialisation="Bowler";

t[5].players[18].player_name="Anrich Nortje";
t[5].players[18].specialisation="Bowler";

t[5].players[19].player_name="Chetan Sakariya";
t[5].players[19].specialisation="Bowler";

// Team 7
t[6].team_name="SRH";
t[6].players[0].player_name="Abdul Samad";
t[6].players[0].specialisation="Batter";

t[6].players[1].player_name="Aiden Markram";
t[6].players[1].specialisation="Captain - Batter";

t[6].players[2].player_name="Rahul Tripathi";
t[6].players[2].specialisation="Batter";

t[6].players[3].player_name="Glenn Phillips";
t[6].players[3].specialisation="Batter";

t[6].players[4].player_name="Harry Brook";
t[6].players[4].specialisation="Batter";

t[6].players[5].player_name="Mayank Agarwal";
t[6].players[5].specialisation="Batter";

t[6].players[6].player_name="Heinrich Klaasen";
t[6].players[6].specialisation="wicket keeper - Batter";

t[6].players[7].player_name="Anmolpreet Singh";
t[6].players[7].specialisation="Batter";

t[6].players[8].player_name="Upendra Singh Yadav";
t[6].players[8].specialisation="Batter";

t[6].players[9].player_name="Nitish Kumar Reddy";
t[6].players[9].specialisation="Batter";

t[6].players[10].player_name="Abhishek Sharma";
t[6].players[10].specialisation="All-Rounder";

t[6].players[11].player_name="Marco Jansen";
t[6].players[11].specialisation="All-Rounder";

t[6].players[12].player_name="Washington Sundar";
t[6].players[12].specialisation="All-Rounder";

t[6].players[13].player_name="Vivrant Sharma";
t[6].players[13].specialisation="All-Rounder";

t[6].players[14].player_name="Mayank Dagar";
t[6].players[14].specialisation="All-Rounder";

t[6].players[15].player_name="Samarthi Vyas";
t[6].players[15].specialisation="All-Rounder";

t[6].players[16].player_name="Sanvir Singh";
t[6].players[16].specialisation="All-Rounder";

t[6].players[17].player_name="Bhuvaneshware Kumar";
t[6].players[17].specialisation="Bowler";

t[6].players[18].player_name="Fazalhaq Farooqi";
t[6].players[18].specialisation="Bowler";

t[6].players[19].player_name="Kartik Tyagi";
t[6].players[19].specialisation="Bowler";

// Team 8
t[7].team_name="LSG";
t[7].players[0].player_name="KL Rahul";
t[7].players[0].specialisation="Captain - Batter";

t[7].players[1].player_name="Manan Vohra";
t[7].players[1].specialisation="Batter";

t[7].players[2].player_name="Quinton De Kock";
t[7].players[2].specialisation="Wicket keeper - Batter";

t[7].players[3].player_name="Nicholas Pooran";
t[7].players[3].specialisation="Batter";

t[7].players[4].player_name="Ayush Badoni";
t[7].players[4].specialisation="All-Rounder";

t[7].players[5].player_name="Deepak Hooda";
t[7].players[5].specialisation="All-Rounder";

t[7].players[6].player_name="Krishnappa Gowtham";
t[7].players[6].specialisation="All-Rounder";

t[7].players[7].player_name="Karan Sharma";
t[7].players[7].specialisation="All-Rounder";

t[7].players[8].player_name="Krunal Pandya";
t[7].players[8].specialisation="All-Rounder";

t[7].players[9].player_name="Kyle Mayers";
t[7].players[9].specialisation="All-Rounder";

t[7].players[10].player_name="Marcus Stoinis";
t[7].players[10].specialisation="All-Rounder";

t[7].players[11].player_name="Romario Shepherd";
t[7].players[11].specialisation="All-Rounder";

t[7].players[12].player_name="Daniel Sams";
t[7].players[12].specialisation="All-Rounder";

t[7].players[13].player_name="Prerak Mankad";
t[7].players[13].specialisation="All-Rounder";

t[7].players[14].player_name="Swapnil Singh";
t[7].players[14].specialisation="All-Rounder";

t[7].players[15].player_name="Yadhvir Singh";
t[7].players[15].specialisation="All-Rounder";

t[7].players[16].player_name="Avesh Khan";
t[7].players[16].specialisation="Bowler";

t[7].players[17].player_name="Mark Wood";
t[7].players[17].specialisation="Bowler";

t[7].players[18].player_name="Mayank Yadav";
t[7].players[18].specialisation="Bowler";

t[7].players[19].player_name="Mohsin Khan";
t[7].players[19].specialisation="Bowler";

// Team 9
t[8].team_name="RR";
t[8].players[0].player_name="Sanju Samson";
t[8].players[0].specialisation="Captain - Wicket keeper - Batter";

t[8].players[1].player_name="Devdutt Padikkal";
t[8].players[1].specialisation="Batter";

t[8].players[2].player_name="Jos Buttler";
t[8].players[2].specialisation="Batter";

t[8].players[3].player_name="Shimron Hetmyer";
t[8].players[3].specialisation="Batter";

t[8].players[4].player_name="Yashavi Jaiswal";
t[8].players[4].specialisation="Batter";

t[8].players[5].player_name="Dhruv Jurel";
t[8].players[5].specialisation="Batter";

t[8].players[6].player_name="Riyan Parag";
t[8].players[6].specialisation="Batter";

t[8].players[7].player_name="Donovan Ferreira";
t[8].players[7].specialisation="Batter";

t[8].players[8].player_name="Kunal Rathore";
t[8].players[8].specialisation="Batter";

t[8].players[9].player_name="Joe Root";
t[8].players[9].specialisation="Batter";

t[8].players[10].player_name="Ravichandran Ashwin";
t[8].players[10].specialisation="All-Rounder";

t[8].players[11].player_name="Akash Vashisht";
t[8].players[11].specialisation="All-Rounder";

t[8].players[12].player_name="Jason Holder";
t[8].players[12].specialisation="All-Rounder";

t[8].players[13].player_name="Abdul P A";
t[8].players[13].specialisation="All-Rounder";

t[8].players[14].player_name="KC Cariappa";
t[8].players[14].specialisation="Bowler";

t[8].players[15].player_name="Kuldeep Sen";
t[8].players[15].specialisation="Bowler";

t[8].players[16].player_name="Kuldeep Yadav";
t[8].players[16].specialisation="Bowler";

t[8].players[17].player_name="Navdeep Saini";
t[8].players[17].specialisation="Bowler";

t[8].players[18].player_name="Obed Mccoy";
t[8].players[18].specialisation="Bowler";

t[8].players[19].player_name="KM Asif";
t[8].players[19].specialisation="Bowler";

// Team 10
t[9].team_name="PK";
t[9].players[0].player_name="Shikhar Dhawan";
t[9].players[0].specialisation="Captain - Batter";

t[9].players[1].player_name="Bhanuka Rajapaksa";
t[9].players[1].specialisation="Batter";

t[9].players[2].player_name="Jitesh Sharma";
t[9].players[2].specialisation="Wicket keeper - Batter";

t[9].players[3].player_name="Jonny Bairstow";
t[9].players[3].specialisation="Batter";

t[9].players[4].player_name="Prabhsimran Singh";
t[9].players[4].specialisation="Batter";

t[9].players[5].player_name="Liam Livingstone";
t[9].players[5].specialisation="Batter";

t[9].players[6].player_name="Shahrukh Khan";
t[9].players[6].specialisation="Batter";

t[9].players[7].player_name="Matthew William Short";
t[9].players[7].specialisation="Batter";

t[9].players[8].player_name="Harpreet Bhatia";
t[9].players[8].specialisation="Batter";


t[9].players[9].player_name="Atharva Tade";
t[9].players[9].specialisation="All-Rounder";

t[9].players[10].player_name="Raj Angad Bawa";
t[9].players[10].specialisation="All-Rounder";

t[9].players[11].player_name="Rishi Dhawan";
t[9].players[11].specialisation="All-Rounder";

t[9].players[12].player_name="Sam Curran";
t[9].players[12].specialisation="All-Rounder";

t[9].players[13].player_name="Sikandar Raza";
t[9].players[13].specialisation="All-Rounder";

t[9].players[14].player_name="Mohit Rathee";
t[9].players[14].specialisation="All-Rounder";

t[9].players[15].player_name="Shivam Singh";
t[9].players[15].specialisation="All-Rounder";

t[9].players[16].player_name="Harpreet Brar";
t[9].players[16].specialisation="Bowler";

t[9].players[17].player_name="Arshdeep Singh";
t[9].players[17].specialisation="Bowler";

t[9].players[18].player_name="Baltej Dhanda";
t[9].players[18].specialisation="Bowler";

t[9].players[19].player_name="Kagiso Rabada";
t[9].players[19].specialisation="Bowler";

int eon=1;
while(eon!=0){
int ch;
printf("\n*IPL 2023 - WHERE TALENT MEETS OPPORTUNITIES!*\n");
printf("Let's start making schedules!\n");
printf("\nEnter 1 for displaying the team details participating in the tournament.\nEnter 2 for adding a new team to the tournament.\nEnter 3 for updating the team details.\nEnter 4 for generating the tournament schedule.\nEnter 5 for updating the tournament schedule.\n");
printf("\nEnter your option : ");
scanf("%d",&ch);

// -------------------ACCESSING TEAM DETAILS--------------------------------
// ------------------MODULE 1 - Displaying Team Details

if(ch==1){
char a[50],b[10];
int x,i,j,v;
printf("\nEnter acronym of the team\n");
printf("RCB --> 'Royal Challengers Bangalore'\nMI  --> 'Mumbai Indians'\nCSK --> 'Chennai SuperKings'\nRR  --> 'Rajasthan Royals'\nKKR --> 'Kolkata Knight Riders'\nGT  --> 'Gujarat Titans'\nPK  --> 'Punjab Kings'\nSRH --> 'SunRisers Hyderabad'\nDC  --> 'Delhi Capitals'\nLSG --> 'Lucknow SuperGiants'\n");
printf("\n");
printf("Select team to show details : ");
scanf("\n");
scanf("%[^\n]%*c",a);
// gets(a);
printf("\n");
for(x=0;x<=9;x++){
v=(strcmp(a,t[x].team_name));
    if(v==0){
    for(j=0;j<20;j++){
        printf("%d . %s ---> %s\n",j+1,t[x].players[j].player_name,t[x].players[j].specialisation);
    }
  
    }
    
}
}

// ------------------------------------Module 2 - Adding a New Team Details---------------------
else if(ch==2){
int  n=10;
int nu,i,j;
printf("\nEnter number of teams to append in the IPL tournament : ");
scanf("%d",&nu);
printf("\n");
for(i=0;i<nu;i++){
  printf("Enter the name of new team %d : ",i+1);
  scanf("\n");
  scanf("%[^\n]%*c",&t[n+1].team_name);
  printf("\n");

  for(j=0;j<20;j++){
    printf("Enter the name of the player %d : ",j+1); 
    scanf("\n");   
    scanf("%[^\n]%*c",&t[n+1].players[j].player_name);
    

    printf("Enter the specialisation of the player %d : ",j+1);
    scanf("\n");
    scanf("%[^\n]%*c",&t[n+1].players[j].specialisation);
    printf("\n");

  }
}  
} 

// ----------------------------Module 3 - Updation of Team Details-----------------
 else if(ch==3){
int y,m,k;
char b[50];
printf("\n Existing teams : \n");
for(y=0;y<n-1;y++){
  printf("%d . %s\n",y+1,t[y].team_name);
}

printf("\nEnter a team to delete : ");
scanf("%s",&b);

for(y=0;y<n-1;y++){
  m=strcmp(b,t[y].team_name);
  if(m==0){
    k=y;
    break;
  }
}
for(y=k;y<n-2;y++){
  t[y]=t[y+1];
}

printf("\nUpdated teams : \n");
for(y=0;y<8;y++){
  printf("%d . %s\n",y+1,t[y].team_name);
}
 }

// ---------------------------------------Module 4 - Generation of Schedule-----------------------------
else if(ch==4){
struct team teams[10] = {
        {"RCB"},
        {"MI"},
        {"CSK"},
        {"GT"},
        {"KKR"},
        {"DC"},
        {"SRH"},
        {"LSG"},
        {"RR"},
        {"PK"}
        };

        struct match matches[55] = {
        {teams[0], teams[1], "Day 1 - 7:30 pm IST"},
        {teams[2], teams[3], "Day 2 - 7:30 pm IST"},
        {teams[4], teams[5], "Day 3 - 3:30 pm IST"},
        {teams[6], teams[7], "Day 3 - 7:30 pm IST"},
        {teams[8], teams[9], "Day 4 - 3:30 pm IST"},
        {teams[5], teams[0], "Day 4 - 7:30 pm IST"},
        {teams[6], teams[9], "Day 5 - 3:30 pm IST"},
        {teams[4], teams[2], "Day 6 - 3:30 pm IST"},
        {teams[2], teams[6], "Day 6 - 7:30 pm IST"},
        {teams[3], teams[4], "Day 7 - 3:30 pm IST"},
        {teams[0], teams[8], "Day 8 - 3:30 pm IST"},
        {teams[1], teams[6], "Day 9 - 7:30 pm IST"},
        {teams[5], teams[9], "Day 10 - 3:30 pm IST"},
        {teams[4], teams[7], "Day 10 - 7:30 pm IST"},
        {teams[6], teams[5], "Day 11 - 3:30 pm IST"},
        {teams[4], teams[6], "Day 11 - 7:30 pm IST"},
        {teams[9], teams[3], "Day 12 - 7:30 pm IST"},
        {teams[1], teams[0], "Day 13 - 3:30 pm IST"},
        {teams[3], teams[2], "Day 14 - 7:30 pm IST"},
        {teams[2], teams[8], "Day 15 - 3:30 pm IST"},
        {teams[6], teams[2], "Day 15 - 7:30 pm IST"},
        {teams[3], teams[6], "Day 16 - 7:30 pm IST"},
        {teams[1], teams[4], "Day 17 - 3:30 pm IST"},
        {teams[5], teams[7], "Day 18 - 3:30 pm IST"},
        {teams[7], teams[9], "Day 18 - 7:30 pm IST"},
        {teams[6], teams[2], "Day 19 - 3:30 pm IST"},
        {teams[2], teams[1], "Day 20 - 3:30 pm IST"},
        {teams[8], teams[0], "Day 20 - 7:30 pm IST"},
        {teams[4], teams[3], "Day 21 - 3:30 pm IST"},
        {teams[2], teams[8], "Day 21 - 7:30 pm IST"},
        {teams[6], teams[9], "Day 22 - 3:30 pm IST"},
        {teams[9], teams[2], "Day 22 - 7:30 pm IST"},
        {teams[1], teams[0], "Day 23 - 3:30 pm IST"},
        {teams[7], teams[2], "Day 23 - 7:30 pm IST"},
        {teams[2], teams[3], "Day 24 - 3:30 pm IST"},
        {teams[3], teams[6], "Day 25 - 3:30 pm IST"},
        {teams[5], teams[4], "Day 25 - 7:30 pm IST"},
        {teams[4], teams[5], "Day 26 - 3:30 pm IST"},
        {teams[9], teams[6], "Day 26 - 3:30 pm IST"},
        {teams[6], teams[9], "Day 26 - 7:30 pm IST"},
        {teams[5], teams[8], "Day 27 - 3:30 pm IST"},
        {teams[4], teams[5], "Day 27 - 7:30 pm IST"},
        {teams[8], teams[2], "Day 28 - 3:30 pm IST"},
        {teams[1], teams[2], "Day 28 - 7:30 pm IST"},
        {teams[0], teams[2], "Day 29 - 3:30 pm IST"},
        {teams[2], teams[0], "Day 30 - 3:30 pm IST"},
        {teams[3], teams[5], "Day 31 - 3:30 pm IST"},
        {teams[0], teams[2], "Day 31 - 7:30 pm IST"},
        {teams[8], teams[1], "Day 32 - 3:30 pm IST"},
        {teams[0], teams[5], "Day 32 - 7:30 pm IST"},
        {teams[5], teams[6], "Day 33 - 3:30 pm IST"},
        {teams[2], teams[2], "Day 33 - 7:30 pm IST"},
        {teams[7], teams[4], "Day 34 - 7:30 pm IST"},
        {teams[9], teams[6], "Day 35 - 3:30 pm IST"},
        {teams[8], teams[9], "Day 35 - 7:30 pm IST"}
    };

    printf("\nIPL 2023 Schedule\n");
    for (int i=0;i<=54; i++) {
        printf("%d . %s Vs %s   ---  %s\n", i+1,matches[i].team1.name, matches[i].team2.name, matches[i].dayTime);
    }
}

// --------------------------Module 5 - Updation of Schedule-------------------------------------
else if(ch==5){
  struct team teams[10] = {
        {"RCB"},
        {"MI"},
        {"CSK"},
        {"GT"},
        {"KKR"},
        {"DC"},
        {"SRH"},
        {"LSG"},
        {"RR"},
        {"PK"}
        };

        struct match matches[55] = {
        {teams[0], teams[1], "Day 1 - 7:30 pm IST"},
        {teams[2], teams[3], "Day 2 - 7:30 pm IST"},
        {teams[4], teams[5], "Day 3 - 3:30 pm IST"},
        {teams[6], teams[7], "Day 3 - 7:30 pm IST"},
        {teams[8], teams[9], "Day 4 - 3:30 pm IST"},
        {teams[5], teams[0], "Day 4 - 7:30 pm IST"},
        {teams[6], teams[9], "Day 5 - 3:30 pm IST"},
        {teams[4], teams[2], "Day 6 - 3:30 pm IST"},
        {teams[2], teams[6], "Day 6 - 7:30 pm IST"},
        {teams[3], teams[4], "Day 7 - 3:30 pm IST"},
        {teams[0], teams[8], "Day 8 - 3:30 pm IST"},
        {teams[1], teams[6], "Day 9 - 7:30 pm IST"},
        {teams[5], teams[9], "Day 10 - 3:30 pm IST"},
        {teams[4], teams[7], "Day 10 - 7:30 pm IST"},
        {teams[6], teams[5], "Day 11 - 3:30 pm IST"},
        {teams[4], teams[6], "Day 11 - 7:30 pm IST"},
        {teams[9], teams[3], "Day 12 - 7:30 pm IST"},
        {teams[1], teams[0], "Day 13 - 3:30 pm IST"},
        {teams[3], teams[2], "Day 14 - 7:30 pm IST"},
        {teams[2], teams[8], "Day 15 - 3:30 pm IST"},
        {teams[6], teams[2], "Day 15 - 7:30 pm IST"},
        {teams[3], teams[6], "Day 16 - 7:30 pm IST"},
        {teams[1], teams[4], "Day 17 - 3:30 pm IST"},
        {teams[5], teams[7], "Day 18 - 3:30 pm IST"},
        {teams[7], teams[9], "Day 18 - 7:30 pm IST"},
        {teams[6], teams[2], "Day 19 - 3:30 pm IST"},
        {teams[2], teams[1], "Day 20 - 3:30 pm IST"},
        {teams[8], teams[0], "Day 20 - 7:30 pm IST"},
        {teams[4], teams[3], "Day 21 - 3:30 pm IST"},
        {teams[2], teams[8], "Day 21 - 7:30 pm IST"},
        {teams[6], teams[9], "Day 22 - 3:30 pm IST"},
        {teams[9], teams[2], "Day 22 - 7:30 pm IST"},
        {teams[1], teams[0], "Day 23 - 3:30 pm IST"},
        {teams[7], teams[2], "Day 23 - 7:30 pm IST"},
        {teams[2], teams[3], "Day 24 - 3:30 pm IST"},
        {teams[3], teams[6], "Day 25 - 3:30 pm IST"},
        {teams[5], teams[4], "Day 25 - 7:30 pm IST"},
        {teams[4], teams[5], "Day 26 - 3:30 pm IST"},
        {teams[9], teams[6], "Day 26 - 3:30 pm IST"},
        {teams[6], teams[9], "Day 26 - 7:30 pm IST"},
        {teams[5], teams[8], "Day 27 - 3:30 pm IST"},
        {teams[4], teams[5], "Day 27 - 7:30 pm IST"},
        {teams[8], teams[2], "Day 28 - 3:30 pm IST"},
        {teams[1], teams[2], "Day 28 - 7:30 pm IST"},
        {teams[0], teams[2], "Day 29 - 3:30 pm IST"},
        {teams[2], teams[0], "Day 30 - 3:30 pm IST"},
        {teams[3], teams[5], "Day 31 - 3:30 pm IST"},
        {teams[0], teams[2], "Day 31 - 7:30 pm IST"},
        {teams[8], teams[1], "Day 32 - 3:30 pm IST"},
        {teams[0], teams[5], "Day 32 - 7:30 pm IST"},
        {teams[5], teams[6], "Day 33 - 3:30 pm IST"},
        {teams[2], teams[2], "Day 33 - 7:30 pm IST"},
        {teams[7], teams[4], "Day 34 - 7:30 pm IST"},
        {teams[9], teams[6], "Day 35 - 3:30 pm IST"},
        {teams[8], teams[9], "Day 35 - 7:30 pm IST"}
    };
  
  // --------------------------Module 5 - Updation of Schedule-------------------------------------

int match_no;
char new_time[100];
printf("\nEnter match number to update : ");
scanf("%d",&match_no);
printf("\nEnter new time for the match  : ");
scanf("\n");
scanf("%[^\n]%*c",&new_time);
strcpy(matches[match_no-1].dayTime,new_time);
printf("\nUpdated schedule : \n");
for(int z=0;z<55;z++){
  printf("%d . %s Vs %s   ---  %s\n", z+1,matches[z].team1.name, matches[z].team2.name, matches[z].dayTime);
}
}
else { 
  printf("Uhhoh! Invalid input.\nEnter a valid choice between 1 - 5.");
}
printf("\nEnter any number except 0 to continue.\nEnter 0 to exit.\n");
printf("\nEnter your choice : ");
scanf("%d",&eon);
}
}
