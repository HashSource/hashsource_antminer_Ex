int auto_set_host_side_baud()
{
  int *v0; // r12
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r3
  char *v5; // r4
  int v6; // r1
  int *all_created_runtime; // r0
  int *v8; // r7
  int v9; // r0
  int v10; // r6
  int v11; // t1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // [sp+14h] [bp-101Ch] BYREF
  _DWORD v20[6]; // [sp+18h] [bp-1018h] BYREF
  char v21[4096]; // [sp+30h] [bp-1000h] BYREF

  LOWORD(v0) = 18916;
  HIWORD(v0) = (unsigned int)"rd\":{\"data\":\"%s\",\"type\":\"PASSWORD\"},\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}" >> 16;
  v1 = *v0;
  v2 = v0[1];
  v3 = v0[2];
  v4 = v0[3];
  v0 += 4;
  v19 = 0;
  v5 = (char *)v20;
  v20[0] = v1;
  v20[1] = v2;
  v20[2] = v3;
  v20[3] = v4;
  v6 = v0[1];
  v20[4] = *v0;
  v20[5] = v6;
  all_created_runtime = (int *)get_all_created_runtime(&v19);
  v8 = all_created_runtime;
  while ( 1 )
  {
    v9 = dev_ctrl(all_created_runtime);
    v11 = *(_DWORD *)v5;
    v5 += 4;
    v10 = v11;
    (*(void (__fastcall **)(int))(v9 + 16))(v11);
    all_created_runtime = (int *)ping_allchip(*v8);
    if ( all_created_runtime )
      break;
    if ( v21 == v5 )
    {
      V_LOCK();
      LOWORD(v12) = 19136;
      HIWORD(v12) = (unsigned int)"rver!" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v12);
      V_UNLOCK();
      LOWORD(v13) = -14512;
      HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v14) = 18992;
      HIWORD(v14) = (unsigned int)"ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}" >> 16;
      zlog(*v13, v14, 142, "auto_set_host_side_baud", 23, 29, 100, v21);
      return -1;
    }
  }
  V_LOCK();
  LOWORD(v16) = 18964;
  HIWORD(v16) = (unsigned int)":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}" >> 16;
  logfmt_raw(v21, 0x1000u, 0, v16, v10);
  V_UNLOCK();
  LOWORD(v17) = -14512;
  HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v18) = 18992;
  HIWORD(v18) = (unsigned int)"ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}" >> 16;
  zlog(*v17, v18, 142, "auto_set_host_side_baud", 23, 24, 40, v21);
  return 0;
}
