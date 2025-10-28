int __fastcall sub_D53E4(_DWORD *a1, int *a2, int a3)
{
  int v6; // r5
  int result; // r0
  int v8; // r3
  int v9; // r4
  int v10; // r7

  v6 = *(_DWORD *)sub_243004(a1);
  sub_2578D4(v6, 0);
  sub_D4700((int)a1, 0, 0, a2, a3);
  result = sub_257374(v6, 0);
  v8 = a1[1];
  if ( !v8 || !*(_DWORD *)(v8 + 36) )
  {
    v9 = a1[7];
    if ( v9 && (unsigned int)(a1[3] - 7) > 2 && (*(_DWORD *)v9 || !*(_BYTE *)(v9 + 38)) )
    {
      v10 = 1;
      do
      {
        sub_2578D4(v6, 0);
        sub_D4700((int)a1, v9, v10, a2, a3);
        result = sub_257374(v6, 0);
        v9 = *(_DWORD *)v9;
        ++v10;
      }
      while ( v9 );
    }
  }
  return result;
}
