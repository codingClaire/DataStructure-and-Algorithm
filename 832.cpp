/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int** flipAndInvertImage(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) 
{
	    for(int i=0;i<ARowSize/2;i++)
		{
			int tmp;
			tmp=a[i];
			a[i]=a[*AColSizes-1-i];
			a[*AColSizes-1-i]=tmp;
		} //翻转每一行
		 
}
