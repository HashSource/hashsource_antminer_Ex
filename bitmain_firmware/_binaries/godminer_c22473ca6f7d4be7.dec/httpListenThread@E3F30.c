int httpListenThread()
{
  int v0; // r10
  int *v1; // r8
  _DWORD *v2; // r9
  _BYTE *v3; // r7
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // r11
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r4
  int v12; // r10
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // [sp+14h] [bp-1030h]
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v22; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  char v24[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v1) = 20164;
  LOWORD(v2) = -14512;
  LOWORD(v3) = -14524;
  LOWORD(v0) = 6532;
  HIWORD(v1) = (unsigned int)&unk_163DA4 >> 16;
  HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v3) = (unsigned int)&unk_16B550 >> 16;
  do
  {
    v4 = socket(2, 1, 6);
    *v1 = v4;
    if ( v4 < 0 )
    {
      V_LOCK();
      LOWORD(v14) = 6436;
      HIWORD(v14) = (unsigned int)&unk_140C3C >> 16;
      logfmt_raw(v24, 0x1000u, 0, v14);
      V_UNLOCK();
      LOWORD(v15) = 5632;
      HIWORD(v15) = (unsigned int)&unk_140918 >> 16;
      zlog(*v2, v15, 142, "httpListenThread", 16, 197, 60, v24);
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&v22.sa_family = -1407778814;
      memset(&v22.sa_data[2], 0, 12);
      if ( bind(v4, &v22, 0x10u) < 0 )
      {
        V_LOCK();
        LOWORD(v16) = 6484;
        HIWORD(v16) = (unsigned int)&unk_140C6C >> 16;
        logfmt_raw(v24, 0x1000u, 0, v16);
        V_UNLOCK();
        v17 = *v2;
        v18 = 210;
      }
      else
      {
        if ( listen(*v1, 100) >= 0 )
          break;
        V_LOCK();
        HIWORD(v0) = (unsigned int)"2x%02x " >> 16;
        logfmt_raw(v24, 0x1000u, 0, v0);
        V_UNLOCK();
        v17 = *v2;
        v18 = 221;
      }
      LOWORD(v19) = 5632;
      HIWORD(v19) = (unsigned int)&unk_140918 >> 16;
      zlog(v17, v19, 142, "httpListenThread", 16, v18, 60, v24);
      close(*v1);
      *v1 = -1;
      sleep(0xAu);
    }
  }
  while ( !*v3 );
  V_LOCK();
  LOWORD(v5) = 6576;
  HIWORD(v5) = (unsigned int)&unk_140CC8 >> 16;
  logfmt_raw(v24, 0x1000u, 0, v5);
  V_UNLOCK();
  LOWORD(v6) = 5632;
  HIWORD(v6) = (unsigned int)&unk_140918 >> 16;
  zlog(*v2, v6, 142, "httpListenThread", 16, 234, 60, v24);
  if ( !*v3 )
  {
    LOWORD(v7) = 6604;
    LOWORD(v8) = 5632;
    HIWORD(v8) = (unsigned int)&unk_140918 >> 16;
    v20 = v8;
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        v9 = *v1;
        addr_len = 16;
        v10 = accept(v9, &addr, &addr_len);
        v11 = v10;
        if ( v10 != -1 )
          break;
        if ( *v3 )
          goto LABEL_12;
      }
      v12 = (unsigned __int8)*v3;
      if ( *v3 )
        break;
      V_LOCK();
      HIWORD(v7) = (unsigned int)&unk_140CE4 >> 16;
      logfmt_raw(v24, 0x1000u, v12, v7, v11);
      V_UNLOCK();
      zlog(*v2, v20, 142, "httpListenThread", 16, 256, 20, v24);
      statusServiceThread(v11);
      if ( *v3 )
        goto LABEL_12;
    }
    close(v10);
  }
LABEL_12:
  close(*v1);
  *v1 = -1;
  return 0;
}
