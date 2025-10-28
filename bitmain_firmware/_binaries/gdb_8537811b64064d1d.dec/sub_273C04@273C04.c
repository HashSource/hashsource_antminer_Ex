void __fastcall sub_273C04(int a1, char *a2, va_list a3)
{
  XML_Size CurrentLineNumber; // r6
  char *v7; // r4
  int *v8; // r0
  int *v9; // r0

  CurrentLineNumber = XML_GetCurrentLineNumber(*(XML_Parser *)a1);
  v7 = sub_93108(a2, a3);
  if ( CurrentLineNumber )
  {
    v8 = (int *)sub_242FDC();
    sub_2594D8(*v8, "%s (line %d): %s\n", *(const char **)(a1 + 4), CurrentLineNumber, v7);
    if ( !v7 )
      return;
    goto LABEL_3;
  }
  v9 = (int *)sub_242FDC();
  sub_2594D8(*v9, "%s: %s\n", *(const char **)(a1 + 4), v7);
  if ( v7 )
LABEL_3:
    free(v7);
}
