int sub_A893C()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v7; // r0
  unsigned __int64 v8; // r2
  int v9; // r6
  int v10; // r7
  int v11; // r2
  int v12; // r3

  v0 = sub_26EA4C();
  v1 = sub_26BC98(v0);
  if ( **(_BYTE **)(sub_A0898(v1) + 24) == 1 )
    v0 = sub_262134(v0);
  v2 = sub_26BC98(v0);
  v3 = sub_A82A8(v2);
  if ( !v3 )
    sub_94708("can't unpack array");
  v4 = sub_26BC98(v0);
  v5 = sub_170068(v4);
  if ( ((int (__fastcall *)(int))loc_165DA0)(v5) )
  {
    v7 = sub_26BC98(v0);
    if ( sub_A3444(v7) )
    {
      v8 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(sub_26BC98(v0) + 24) + 24) + 24);
      if ( v8 )
      {
        v9 = 0;
        do
        {
          v8 >>= 1;
          ++v9;
        }
        while ( v8 );
        v10 = v9;
      }
      else
      {
        v10 = 0;
        v9 = 0;
      }
      v11 = 8 * *(_DWORD *)(sub_26BC98(v0) + 20) - v10;
      v12 = v11 & 7;
      if ( v11 <= 0 )
        v12 = -(-v11 & 7);
      v0 = sub_A7620(v0, 0, v11 / 8, v12, v9, v3);
    }
  }
  return sub_A14FC(v0, v3);
}
