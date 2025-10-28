_DWORD *__fastcall sub_343680(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // lr
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r3
  int v7; // [sp+8h] [bp-3Ch] BYREF
  int v8; // [sp+Ch] [bp-38h]
  unsigned int v9; // [sp+10h] [bp-34h]
  unsigned int v10; // [sp+14h] [bp-30h]
  int v11; // [sp+18h] [bp-2Ch]
  _DWORD *v12; // [sp+20h] [bp-24h]
  _DWORD *v13; // [sp+24h] [bp-20h]
  int v14; // [sp+28h] [bp-1Ch] BYREF
  int v15; // [sp+2Ch] [bp-18h]
  unsigned int v16; // [sp+30h] [bp-14h]
  unsigned int v17; // [sp+34h] [bp-10h]
  int v18; // [sp+38h] [bp-Ch]
  int i; // [sp+3Ch] [bp-8h]

  v13 = a1;
  v12 = a2;
  sub_34236C(&v14, a2);
  for ( i = sub_342474(v14, v15, v16, v17, v18); !i && v12[7]; i = sub_342474(v7, v8, v9, v10, v11) )
  {
    pthread_cond_wait((pthread_cond_t *)(v12 + 22), (pthread_mutex_t *)(v12 + 9));
    sub_34236C(&v7, v12);
    v14 = v7;
    v15 = v8;
    v16 = v9;
    v17 = v10;
    v18 = v11;
  }
  v2 = v13;
  v3 = v15;
  v4 = v16;
  v5 = v17;
  *v13 = v14;
  v2[1] = v3;
  v2[2] = v4;
  v2[3] = v5;
  v2[4] = v18;
  return v13;
}
