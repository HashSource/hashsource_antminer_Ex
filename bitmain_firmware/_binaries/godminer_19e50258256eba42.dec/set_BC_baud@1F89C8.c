int __fastcall set_BC_baud(char a1)
{
  unsigned int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  usleep(0xC350u);
  v3 = sub_1F87E0() & 0xFFFFFFC0 | a1 & 0x3F;
  sub_1F880C(v3);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
