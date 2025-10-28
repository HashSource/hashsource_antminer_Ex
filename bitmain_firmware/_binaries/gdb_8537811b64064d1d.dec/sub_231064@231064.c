char **__fastcall sub_231064(char **a1, const char *a2)
{
  int v4; // r1

  if ( dword_489AD8 <= 1 )
    v4 = sub_224544("get OS data");
  else
    v4 = dword_4899A0;
  if ( v4 )
    sub_2305B8(a1, v4, 15, a2);
  else
    *a1 = 0;
  return a1;
}
