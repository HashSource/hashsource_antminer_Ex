void __fastcall sub_2589E0(void **a1)
{
  void *v2; // r0
  __int64 v3; // r0

  if ( !a1 )
  {
    v3 = sub_94728((int)"utils.c", 205, "free_current_contents: NULL pointer");
    sub_258A20(v3, HIDWORD(v3));
  }
  v2 = *a1;
  if ( *a1 )
  {
    free(v2);
    *a1 = 0;
  }
}
