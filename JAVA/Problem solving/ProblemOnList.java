/*
---------- Problem Statment's ---------
Find Element at Index
Input 1 → List: [10,20,30,40], index = 2
Output 1 → 30
Input 2 → [5,6,7], index = 0
Output 2 → 5

2. Count Occurrences
Input 1 → [1,2,2,3,2], element=2
Output 1 → 3
Input 2 → [5,5,5], element=5
Output 2 → 3

3. Check Element Present
Input 1 → [10,20,30], key=20
Output 1 → true
Input 2 → [11,22], key=99
Output 2 → false


*/

import java.util.*;

class Listx{
    List <Integer> iResultList;
    int iResult;

    public Listx(){
        iResultList = new ArrayList<>();
        iResult = 0;
    }

    public int getValue(List<Integer> list, int iTargetIndex){
        if (list.size() < iTargetIndex & list.size() < 0){
            System.out.println("Index out of list, enter valid index");
            return -1;
        }
        return list.get(iTargetIndex);
    }

    public int count(List<Integer> list, int iTargetElement){
        int i = 0;
        iResult = 0;
        for(i = 0; i < list.size(); i++){
            if(list.get(i) == iTargetElement){
                iResult++;
            }
        }
        return iResult;
    }

    public boolean is_present(List<Integer> list, int iTargetElement){
        if(list.size() <= 0){
            return false;
        }
        if(list.contains(iTargetElement)){
            return true;
        }
        return false;
    }


}

class ProblemOnList{
    public static void main(String[] arg){
        // object creation
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> num_list = new ArrayList<>(List.of(1, 9, 2, 5, 3, 4, 6, 8, 9, 2, 5, 3, 6, 8, 9, 7, 0));
        Listx list = new Listx();
        //////////////////////
        // variable
        int iRet = 0;
        int iElement = 0;
        int iIndex = 0;
        boolean bRet = false;
        ////////////////////
        
        // System.out.println("Enter the index to access to value: ");
        // iIndex = input.nextInt();
        // iRet = list.getValue(num_list, iIndex);
        // System.out.println(iRet+" is present at index "+iIndex);

        // System.out.println("Enter the element to count occurrences: ");
        // iElement = input.nextInt();
        // iRet = list.count(num_list, iElement);
        // System.out.println(iElement+" occures "+iRet+" Times.");

        System.out.println("Enter the element to check it exists or not: ");
        iElement = input.nextInt();
        bRet = list.is_present(num_list, iElement);
        if(bRet == true){
            System.out.println("Element is present");
        }else{
            System.out.println("Elementis not present");
        }
    }
}