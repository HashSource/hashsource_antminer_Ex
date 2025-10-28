int __fastcall pipe_reserve(_DWORD *a1, int a2)
{
  _DWORD v3[6]; // [sp+8h] [bp-44h] BYREF
  unsigned int v4; // [sp+20h] [bp-2Ch]
  _DWORD *v5; // [sp+24h] [bp-28h]
  char v6; // [sp+2Bh] [bp-21h] BYREF
  int v7[6]; // [sp+2Ch] [bp-20h] BYREF
  _DWORD *v8; // [sp+44h] [bp-8h]

  v5 = a1;
  v8 = a1;
  v6 = 1;
  v4 = sub_34231C((int)a1) * a2;
  if ( !v4 )
    v4 = 32;
  v7[5] = v8[2];
  sub_342700((int)v8);
  sub_34236C(v7, v8);
  if ( v4 > sub_342474(v7[0], v7[1], v7[2], v7[3], v7[4]) )
    sub_342E4C(v3, (int)v8, v4, &v6);
  return sub_342744((int)v8);
}
