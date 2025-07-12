#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
/*
Itinerary from Tickets

Plane ticket Pairs <from, to>

    Chennai -> Bengaluru
    Mumbai -> Delhi
    Goa -> Chennai
    Delhi -> Goa
*/
void PlanTicket(unordered_map<string,string>tickets)//Plan Ticket Starting and plan Destination
{
    unordered_set<string>ticket;//from 
    for(pair<string,string>p:tickets)
    {
        ticket.insert(p.second);
    }
 string start;
    for(pair<string,string>p:tickets)
    {
        if(ticket.find(p.first)==ticket.end())
        {
            start=p.first;
            
        }
    }
    cout<<start<<"->";
    while(tickets.count(start))
    {
         
        cout<<tickets[start]<<"->";
        start=tickets[start];

    }
}
int main(){
    unordered_map<string,string>tickets;
    // from    ->     to
     tickets["Chennai"]="Bengaluru";
    tickets["Mumbai"]="Delhi";
    tickets["Goa"]="Chennai";
    tickets["Delhi"]="Goa";
     PlanTicket(tickets);
    return 0;
}