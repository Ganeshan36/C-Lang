//Ganeshan M
// S2 CSE D
//AM.En.U4CSE19320
//LIBRARY CATALOG SEARCH
#include <stdio.h>
#include <string.h>
int main(){
	char title[100];
	int i,f=0,j,k;
	char string[10][5][20][100]={ { {"The Great Gatsby\n"}, 
    {"One Hundred Years of Solitude\n"}, 
    {"The Governess, or The Little Female Academy\n", "The History of Little Goody Two-Shoes\n"}, 
    {"The Parables of Our Lord and Saviour Jesus Christ\n", "Hymns for the Amusement of Children\n"}, 
    {"Lessons for Children\n", "An Easy Introduction to the Knowledge of Nature\n"} }, 
    { {"Hymns in Prose for Children\n", "Sacred Dramas\n"}, 
    {"The Life and Perambulation of a Mouse\n", "Cobwebs to Catch Flies\n"}, {"The History of Sandford and Merton\n", "Anecdotes of a Boarding School\n"}, {"The Female Guardian\n", "A Description of a Set of Prints of Scripture History\n"}, 
    {"Fabulous Histories\n", "The History of Little Jack\n"} }, 
    { {"Original Stories from Real Life\n", "The Parent's Assistant\n"}, 
    {"Adventures of a Pincushion\n", "Evenings at Home\n"}, 
    {"Keeper’s Travels in Search of His Master\n", "The Rational Brutes\n"}, 
    {"Moral Tales for Young People\n", "1984\n"}, 
    {"The Ambassadors\n", "An American Tragedy\n"} }, 
    { {"Brave New World\n", "Catch-22\n"}, {"The Catcher in the Rye\n", "A Clockwork Orange\n"}, {"The Day of the Locust\n", "Finnegans Wake\n"}, {"The Grapes of Wrath\n", "The Great Gatsby\n"}, {"Heart of Darkness\n", "The House of Mirth\n"} }, 
    { {"Invisible Man\n", "Lolita\n"}, {"Midnight's Children\n", "The Naked and the Dead\n"}, {"Native Son\n", "On the Road\n"}, {"Pale Fire\n", "A Passage to India\n"}, {"A Portrait of the Artist as a Young Man\n", "The Sheltering Sky\n"} },
    { {"Slaughterhouse-Five\n", "The Sound and the Fury\n"}, {"The Sun Also Rises\n", "To the Lighthouse\n"}, {"Tropic of Cancer\n", "Ulysses\n"}, {"Under the Volcano\n", "The USA Trilogy\n"}, {"Winesburg, Ohio\n", "Women in Love\n"} }, {
    {"The Lord of the Rings\n", "Pride and Prejudice\n"}, 
    {"His Dark Materials\n", "The Hitchhiker's Guide to the Galaxy\n"}, 
    {"Harry Potter and the Goblet of Fire\n", "To Kill a Mockingbird\n"}, 
    {"Winnie-the-Pooh\n", "Nineteen Eighty-Four\n"}, 
    {"The Lion, the Witch and the Wardrobe\n", "Jane Eyre\n"} }, 
    { {"Birdsong\n", "Wuthering Heights\n"}, {"Captain Corelli's Mandolin\n", "Gone with the Wind\n"}, {"War and Peace\n", "Rebecca\n"}, {"Little Women\n", "Great Expectations\n"}, {"The Wind in the Willows\n", "The Catcher in the Rye\n"} }, 
    { {"Tess of the d'Urbervilles\n", "The Story of Tracy Beaker\n"}, {"Alice's Adventures in Wonderland\n", "The Grapes of Wrath\n"}, {"A Prayer for Owen Meany\n", "Middlemarch\n"}, {"The Hobbit\n", "Harry Potter and the Prisoner of Azkaban\n"}, {"Harry Potter and the Chamber of Secrets\n", "Harry Potter and the Philosopher's Stone\n"} },
    { {"One Hundred Years of Solitude\n", "Charlie and the Chocolate Factory\n"}, {"A Town Like Alice\n", "The Pillars of the Earth\n"}, {"A Christmas Carol\n", "Emma\n"}, {"Dune\n", "Treasure Island\n"}, {"David Copperfield\n", "Persuasion\n"} } 
    };
	printf("Enter title : ");
	fgets(title, 100, stdin);
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<2;k++)
			{
				if(strcmp(title,string[i][j][k])==0)
				{
					printf("Cupboard :%d\nRack :%d\nBook :%d\n",i+1,j+1,k+1);
					f=1;
					break;
				}
			}
		}
	}
	if(f==0)printf("Not found\n");	
	return 0; 
}