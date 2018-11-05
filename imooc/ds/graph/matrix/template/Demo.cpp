/*
           A
         / | \ 
        B--F--E
         \ /\ /
          C--D

    A B C D E F
    0 1 2 3 4 5

    A-B 6  A-E 5  A-F 1
    B-C 3  B-F 2 
    C-F 8  C-D 7
    D-F 4  D-E 2
    E-F 9 

*/

#include "Node.h"
#include "CMap.h"
#include "City.h"

int main()
{
    CMap<City> *pMap = new CMap<City>(6); 
	

    City cityA("A");
    Node<City> *pNodeA = new Node<City>();
    pNodeA->setData(cityA);

    City cityB("B");
    Node<City> *pNodeB = new Node<City>();
    pNodeB->setData(cityB);	

    City cityC("C");
    Node<City> *pNodeC = new Node<City>();
    pNodeC->setData(cityC);

    City cityD("D");
    Node<City> *pNodeD = new Node<City>();
    pNodeD->setData(cityD);

    City cityE("E");
    Node<City> *pNodeE = new Node<City>();
    pNodeE->setData(cityE);

    City cityF("F");
    Node<City> *pNodeF = new Node<City>();
    pNodeF->setData(cityF);

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);
   
    pMap->setValueToMatrixForUndirectedGraph(0,1,6);
    pMap->setValueToMatrixForUndirectedGraph(0,4,5);
    pMap->setValueToMatrixForUndirectedGraph(0,5,1);
    pMap->setValueToMatrixForUndirectedGraph(1,2,3);
    pMap->setValueToMatrixForUndirectedGraph(1,5,2);
    pMap->setValueToMatrixForUndirectedGraph(2,5,8);
    pMap->setValueToMatrixForUndirectedGraph(2,3,7);
    pMap->setValueToMatrixForUndirectedGraph(3,5,4);
    pMap->setValueToMatrixForUndirectedGraph(3,4,2);
    pMap->setValueToMatrixForUndirectedGraph(4,5,9);

    
    pMap->primTree(0);
//    pMap->kruskalTree();

    delete pMap;
    pMap = NULL;
    delete pNodeA;
    pNodeA = NULL;
    delete pNodeB;
    pNodeB = NULL;
    delete pNodeC;
    pNodeC = NULL;
    delete pNodeD;
    pNodeD = NULL;
    delete pNodeE;
    pNodeE = NULL;
    delete pNodeF;
    pNodeF = NULL;

    return 0;
}
