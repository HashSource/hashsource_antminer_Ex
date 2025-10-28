int __fastcall open_pic(unsigned __int8 a1)
{
  int v4; // [sp+Ch] [bp-10h] BYREF
  __int16 v5; // [sp+10h] [bp-Ch]
  char v6; // [sp+12h] [bp-Ah]
  unsigned __int8 v7; // [sp+13h] [bp-9h]
  int v8; // [sp+14h] [bp-8h]

  if ( g_bitmain_pic_state[2 * a1] && g_bitmain_pic_state[2 * a1 + 1] )
    return g_bitmain_pic_state[2 * a1];
  v4 = a1;
  v5 = 0;
  v6 = byte_C25938;
  v7 = a1;
  pthread_mutex_lock(&i2c_mutex_all);
  v8 = iic_init((int)&v4);
  pthread_mutex_unlock(&i2c_mutex_all);
  if ( v8 >= 0 )
  {
    g_bitmain_pic_state[2 * a1] = v8;
    g_bitmain_pic_state[2 * a1 + 1] = 1;
  }
  return v8;
}
