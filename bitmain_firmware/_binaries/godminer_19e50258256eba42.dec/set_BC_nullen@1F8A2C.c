int __fastcall set_BC_nullen(int a1, char a2)
{
  unsigned int v5; // [sp+Ch] [bp-8h]
  int v6; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  v5 = (a1 << 16) | sub_1F87E0() & 0xFFF0FFFF | 0x800000;
  if ( a2 )
    v6 = v5 | 0x400000;
  else
    v6 = v5 & 0xFFBFFFFF;
  sub_1F880C(v6);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
