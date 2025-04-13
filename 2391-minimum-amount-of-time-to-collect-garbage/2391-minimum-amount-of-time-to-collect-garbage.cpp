class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP=0;
        int pickM=0;
        int pickG=0;

        int travelP=0;
        int travelM=0;
        int travelG=0;

        int lastP=0;  //last index of P
        int lastM=0;  //last index of M
        int lastG=0;  //last index of G

        //Now Calculate the pickTime & travelTime
        for(int i=0;i<garbage.size();i++){
            string current=garbage[i];
            for(int j=0;j<current.size();j++){
                char ch=current[j];
                if(ch=='P'){
                    pickP++;
                    lastP=i;
                }else if(ch=='G'){
                    pickG++;
                    lastG=i;
                }else if(ch=='M'){
                    pickM++;
                    lastM=i;
                }
            }
        }
        //Calcualte travel Time
        for(int i=0;i<lastP;i++){
            travelP+=travel[i];
        }
        for(int i=0;i<lastG;i++){
            travelG+=travel[i];
        }
        for(int i=0;i<lastM;i++){
            travelM+=travel[i];
        }
        int finalAns=(pickP+travelP)+(pickG+travelG)+(pickM+travelM);
        return finalAns;
    }
};