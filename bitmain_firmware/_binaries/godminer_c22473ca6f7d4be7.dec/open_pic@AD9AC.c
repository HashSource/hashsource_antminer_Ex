int __fastcall open_pic(int a1)
{
  int v1; // r6
  pthread_mutex_t *v2; // r7
  char v4; // r3
  int v6; // [sp+0h] [bp-Ch] BYREF
  __int16 v7; // [sp+4h] [bp-8h]
  char v8; // [sp+6h] [bp-6h]
  char v9; // [sp+7h] [bp-5h]

  v1 = g_bitmain_pic_state[2 * a1];
  if ( !v1 || !g_bitmain_pic_state[2 * a1 + 1] )
  {
    LOWORD(v2) = -16296;
    HIWORD(v2) = (unsigned int)&unk_16AE48 >> 16;
    v4 = v2[1].__size[0];
    v6 = a1;
    v7 = 0;
    v8 = v4;
    v9 = a1;
    pthread_mutex_lock(v2);
    v1 = iic_init((int)&v6);
    pthread_mutex_unlock(v2);
    if ( v1 >= 0 )
    {
      g_bitmain_pic_state[2 * a1] = v1;
      g_bitmain_pic_state[2 * a1 + 1] = 1;
    }
  }
  return v1;
}
