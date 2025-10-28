int __fastcall sub_258C44(int a1)
{
  int v1; // r3
  __int64 v2; // r0

  v1 = a1;
  if ( a1 > 0 )
    sub_94728((int)"utils.c", 778, "virtual memory exhausted: can't allocate %ld bytes.", a1);
  v2 = sub_94728((int)"utils.c", 784, "virtual memory exhausted.", v1);
  return sub_258C80(v2, (void *)HIDWORD(v2));
}
