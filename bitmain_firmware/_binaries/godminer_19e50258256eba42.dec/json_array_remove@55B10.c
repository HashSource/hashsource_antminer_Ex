int __fastcall json_array_remove(_DWORD *a1, unsigned int a2)
{
  if ( !a1 || *a1 != 1 )
    return -1;
  if ( a2 >= a1[3] )
    return -1;
  sub_54798(*(_DWORD *)(a1[4] + 4 * a2));
  if ( a2 < a1[3] - 1 )
    sub_556D4((int)a1, a2, a2 + 1, a1[3] - a2 - 1);
  --a1[3];
  return 0;
}
