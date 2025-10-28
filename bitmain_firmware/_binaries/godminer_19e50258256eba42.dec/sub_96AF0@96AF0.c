int __fastcall sub_96AF0(int a1, int a2)
{
  int v2; // r3
  int v4; // [sp+0h] [bp-7Ch]
  _DWORD v5[12]; // [sp+8h] [bp-74h]
  _DWORD v6[12]; // [sp+38h] [bp-44h]
  int v7; // [sp+68h] [bp-14h]
  int v8; // [sp+6Ch] [bp-10h]
  int i; // [sp+70h] [bp-Ch]
  int v10; // [sp+74h] [bp-8h]

  v4 = a2;
  v6[0] = *(_DWORD *)"A";
  v6[1] = *(_DWORD *)"+";
  v6[2] = *(_DWORD *)"%";
  v6[3] = *(_DWORD *)" ";
  v6[4] = 17;
  v6[5] = 15;
  v6[6] = 12;
  v6[7] = 7;
  v6[8] = -3;
  v6[9] = -8;
  v6[10] = -13;
  v6[11] = -18;
  v5[0] = -10;
  v5[1] = -10;
  v5[2] = -10;
  v5[3] = 0;
  v5[4] = 10;
  v5[5] = 20;
  v5[6] = 30;
  v5[7] = 40;
  v5[8] = 60;
  v5[9] = 70;
  v5[10] = 80;
  v5[11] = 100;
  v10 = 0;
  v8 = 12;
  if ( a2 >= dword_5992B4 )
  {
    if ( a2 > dword_5992B4 )
      v4 = a2 - 1;
  }
  else
  {
    v4 = a2 + 1;
  }
  v7 = v4 - *(_DWORD *)(a1 + 88);
  dword_5992B4 = v4;
  for ( i = 0; i < v8 - 1; ++i )
  {
    if ( v7 > v6[i + 1] && v7 <= v6[i] )
    {
      v10 = v5[i];
      break;
    }
  }
  if ( v7 > v6[0] )
    v10 = v5[0];
  if ( v7 <= v6[v8 - 1] )
    v10 = v5[v8 - 1];
  v2 = v10;
  if ( v10 >= 100 )
    v2 = 100;
  if ( v5[0] >= v2 )
    return v5[0];
  return v2;
}
