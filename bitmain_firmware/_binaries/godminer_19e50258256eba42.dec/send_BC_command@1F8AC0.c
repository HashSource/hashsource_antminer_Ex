int __fastcall send_BC_command(int *a1, int a2)
{
  unsigned int v5; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  sub_1F8750(a1);
  v5 = (a2 << 16) | sub_1F87E0() & 0xFFF0FFFF | 0x80800000;
  sub_1F880C(v5);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
