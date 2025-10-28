int sub_343924(_DWORD *a1, ...)
{
  _DWORD v2[7]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD *v3; // [sp+24h] [bp-10h]
  char v4; // [sp+2Bh] [bp-9h] BYREF
  unsigned int v5; // [sp+2Ch] [bp-8h]
  int varg_r1; // [sp+3Ch] [bp+8h] BYREF
  va_list varg_r1a; // [sp+3Ch] [bp+8h]
  int varg_r2; // [sp+40h] [bp+Ch]
  unsigned int varg_r3; // [sp+44h] [bp+10h]
  unsigned int v10; // [sp+48h] [bp+14h]
  int v11; // [sp+4Ch] [bp+18h]
  va_list va1; // [sp+50h] [bp+1Ch] BYREF

  va_start(va1, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(va1, _DWORD);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v10 = va_arg(va1, _DWORD);
  v11 = va_arg(va1, _DWORD);
  v3 = a1;
  v5 = sub_3423E0(varg_r1, varg_r2, varg_r3, v10, v11);
  v4 = 1;
  if ( sub_342474(varg_r1, varg_r2, varg_r3, v10, v11) > v5 >> 2 )
    return pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 15));
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 9));
  sub_34236C((int *)varg_r1a, v3);
  v5 = sub_3423E0(varg_r1, varg_r2, varg_r3, v10, v11);
  if ( sub_342474(varg_r1, varg_r2, varg_r3, v10, v11) <= v5 >> 2 )
    sub_342E4C(v2, (int)v3, v5 >> 1, &v4);
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 9));
  return pthread_mutex_unlock((pthread_mutex_t *)(v3 + 15));
}
