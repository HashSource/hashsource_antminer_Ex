int __fastcall sub_1F3B10(unsigned __int8 a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  pthread_mutex_lock(&i2c_mutex_all);
  iic_write(g_bitmain_pic_state[2 * a1], a2, a3);
  usleep(0x2710u);
  iic_read(g_bitmain_pic_state[2 * a1], a4, a5);
  return pthread_mutex_unlock(&i2c_mutex_all);
}
