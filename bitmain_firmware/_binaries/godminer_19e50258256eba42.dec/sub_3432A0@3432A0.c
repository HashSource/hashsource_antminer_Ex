_DWORD *__fastcall sub_3432A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // lr
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r3
  int v8; // [sp+8h] [bp-4Ch] BYREF
  int v9; // [sp+Ch] [bp-48h]
  unsigned int v10; // [sp+10h] [bp-44h]
  unsigned int v11; // [sp+14h] [bp-40h]
  int v12; // [sp+18h] [bp-3Ch]
  _DWORD *v13; // [sp+24h] [bp-30h]
  _DWORD *v14; // [sp+28h] [bp-2Ch]
  _DWORD *v15; // [sp+2Ch] [bp-28h]
  int v16; // [sp+34h] [bp-20h] BYREF
  int v17; // [sp+38h] [bp-1Ch]
  unsigned int v18; // [sp+3Ch] [bp-18h]
  unsigned int v19; // [sp+40h] [bp-14h]
  int v20; // [sp+44h] [bp-10h]
  int v21; // [sp+48h] [bp-Ch]
  int v22; // [sp+4Ch] [bp-8h]

  v15 = a1;
  v14 = a2;
  v13 = a3;
  sub_34236C(&v16, a2);
  v22 = sub_342474(v16, v17, v18, v19, v20);
  v21 = v14[8];
  for ( *v13 = v14[2]; v22 == *v13 && v21; *v13 = v14[2] )
  {
    pthread_cond_wait((pthread_cond_t *)(v14 + 34), (pthread_mutex_t *)(v14 + 15));
    sub_34236C(&v8, v14);
    v16 = v8;
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v20 = v12;
    v22 = sub_342474(v8, v9, v10, v11, v12);
    v21 = v14[8];
  }
  v3 = v15;
  v4 = v17;
  v5 = v18;
  v6 = v19;
  *v15 = v16;
  v3[1] = v4;
  v3[2] = v5;
  v3[3] = v6;
  v3[4] = v20;
  return v15;
}
