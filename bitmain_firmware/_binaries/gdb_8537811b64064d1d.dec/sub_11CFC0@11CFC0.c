int __fastcall sub_11CFC0(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  int v7; // r0
  int v8; // r3
  _DWORD v9[51]; // [sp+14h] [bp-CCh] BYREF

  v4 = dword_4872D8;
  v5 = *(_DWORD *)(dword_4872D8 + 400);
  if ( !v5 )
  {
    v7 = sub_3239A8(41, sub_11D774, sub_11FF98, 0, *(_DWORD *)(dword_4872D8 + 344) + 48, sub_25AF14, nullsub_44);
    v8 = dword_4872D8;
    *(_DWORD *)(v4 + 400) = v7;
    v5 = *(_DWORD *)(v8 + 400);
  }
  memset(&v9[2], 0, 0xC4u);
  v9[0] = a1;
  v9[1] = a2;
  return sub_324058(v5, v9, 1);
}
