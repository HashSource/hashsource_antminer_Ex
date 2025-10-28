int __fastcall dev_init_pic_for_one_chain(int a1)
{
  const char *v3; // r0
  _DWORD *v4; // r3
  const char *v5; // r0
  _DWORD *v6; // r3
  const char *v7; // r0
  _DWORD *v8; // r2
  int v9; // r3
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
  {
    if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
    {
      V_LOCK();
      LOWORD(v8) = -14664;
      HIWORD(v8) = (unsigned int)&unk_16B4C8 >> 16;
      LOWORD(v9) = -1176;
      HIWORD(v9) = (unsigned int)"fixture_info_len" >> 16;
      logfmt_raw(v13, 0x1000u, 0, v9, *v8, g_chain_info[2 * *v8]);
      V_UNLOCK();
      LOWORD(v10) = -14512;
      HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
      v11 = *v10;
      LOWORD(v10) = -1352;
      LOWORD(v12) = -1132;
      HIWORD(v10) = (unsigned int)"ut chain %d open eeprom failed\n" >> 16;
      HIWORD(v12) = (unsigned int)"_standard" >> 16;
      zlog(v11, v12, 157, v10, 26, 135, 100, v13);
      return -1;
    }
    else if ( pic1704_reset(g_chain_info[2 * a1]) )
    {
      usleep(0x493E0u);
      if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
      {
        usleep(0x493E0u);
        return 0;
      }
      else
      {
        LOWORD(v6) = -14664;
        LOWORD(v7) = -928;
        HIWORD(v6) = (unsigned int)&unk_16B4C8 >> 16;
        HIWORD(v7) = (unsigned int)"mperature" >> 16;
        printf(v7, *v6, g_chain_info[2 * *v6]);
        return -1;
      }
    }
    else
    {
      LOWORD(v4) = -14664;
      LOWORD(v5) = -972;
      HIWORD(v4) = (unsigned int)&unk_16B4C8 >> 16;
      HIWORD(v5) = (unsigned int)"nonce_response_rate" >> 16;
      printf(v5, *v4, g_chain_info[2 * *v4]);
      return -1;
    }
  }
  else
  {
    LOWORD(v3) = -1204;
    HIWORD(v3) = (unsigned int)"s : 0x%04x\n" >> 16;
    printf(v3, a1);
    return -1;
  }
}
