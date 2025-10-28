int __fastcall sub_24BAC0(_BYTE *a1, int a2)
{
  int **v4; // r0
  int v5; // r2

  if ( dword_48A8D0 )
    sub_248B30(&dword_48A8C8);
  if ( a1 && *a1 )
  {
    v5 = sub_14CBC4((int)a1);
  }
  else
  {
    v4 = (int **)sub_1DDBE4();
    v5 = sub_1DFB64(v4);
  }
  return sub_24B6A0(1, 0, v5, 0, a2);
}
