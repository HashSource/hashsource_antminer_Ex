_DWORD *sub_343000(_DWORD *a1, _DWORD *a2, ...)
{
  unsigned int v2; // r0
  _DWORD *v3; // lr
  int v4; // r1
  _DWORD v6[6]; // [sp+8h] [bp-34h] BYREF
  _DWORD *v7; // [sp+20h] [bp-1Ch]
  _DWORD *v8; // [sp+24h] [bp-18h]
  int v9; // [sp+28h] [bp-14h]
  unsigned int v10; // [sp+2Ch] [bp-10h]
  unsigned int v11; // [sp+30h] [bp-Ch]
  unsigned int v12; // [sp+34h] [bp-8h]
  int varg_r2; // [sp+40h] [bp+4h] BYREF
  va_list varg_r2a; // [sp+40h] [bp+4h]
  int varg_r3; // [sp+44h] [bp+8h]
  unsigned int v16; // [sp+48h] [bp+Ch]
  unsigned int v17; // [sp+4Ch] [bp+10h]
  int v18; // [sp+50h] [bp+14h]
  int v19; // [sp+54h] [bp+18h]
  _BYTE *v20; // [sp+58h] [bp+1Ch]
  va_list va1; // [sp+5Ch] [bp+20h] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v16 = va_arg(va1, _DWORD);
  v17 = va_arg(va1, _DWORD);
  v18 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v20 = va_arg(va1, _BYTE *);
  v8 = a1;
  v7 = a2;
  v12 = sub_34231C((int)a2);
  v11 = sub_3423E0(varg_r2, varg_r3, v16, v17, v18);
  if ( v19 + sub_342474(varg_r2, varg_r3, v16, v17, v18) > v11 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v7 + 9));
    sub_34236C((int *)varg_r2a, v7);
    v10 = v19 + sub_342474(varg_r2, varg_r3, v16, v17, v18);
    v9 = v10 / v12;
    if ( v10 > v11 )
    {
      v2 = sub_342604(v9 + 1);
      sub_342E4C(v6, (int)v7, v12 * v2, v20);
      varg_r2 = v6[0];
      varg_r3 = v6[1];
      v16 = v6[2];
      v17 = v6[3];
      v18 = v6[4];
    }
    pthread_mutex_unlock((pthread_mutex_t *)(v7 + 9));
  }
  v3 = v8;
  v4 = varg_r3;
  *v8 = varg_r2;
  v3[1] = v4;
  v3[2] = v16;
  v3[3] = v17;
  v3[4] = v18;
  return v8;
}
