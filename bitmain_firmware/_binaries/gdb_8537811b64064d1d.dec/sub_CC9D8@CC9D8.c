_DWORD *__fastcall sub_CC9D8(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[34];
  *a1 = off_37E234;
  if ( v2 )
    free(v2);
  sub_CC880(a1);
  return a1;
}
