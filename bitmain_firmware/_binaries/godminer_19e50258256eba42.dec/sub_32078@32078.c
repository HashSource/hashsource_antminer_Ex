int __fastcall sub_32078(json_t *a1, int a2, char *a3)
{
  _BYTE v6[32]; // [sp+34h] [bp-1060h] BYREF
  _DWORD s[4]; // [sp+1054h] [bp-40h] BYREF
  int v8; // [sp+1064h] [bp-30h] BYREF
  char *nptr; // [sp+1068h] [bp-2Ch] BYREF
  unsigned __int8 v10; // [sp+106Fh] [bp-25h]
  unsigned int v11; // [sp+1070h] [bp-24h]
  unsigned __int16 v12; // [sp+1074h] [bp-20h]
  unsigned __int8 v13; // [sp+1076h] [bp-1Eh]
  unsigned __int8 v14; // [sp+1077h] [bp-1Dh]
  _DWORD *all_created_runtime; // [sp+1078h] [bp-1Ch]
  int v16; // [sp+107Ch] [bp-18h]
  int v17; // [sp+1080h] [bp-14h]
  char *v18; // [sp+1084h] [bp-10h]

  v16 = 0;
  v8 = 0;
  v17 = a2;
  v18 = a3;
  all_created_runtime = get_all_created_runtime(&v8);
  if ( v8 > 0 )
  {
    if ( v17 && a1 )
    {
      sub_2DE54(a1, 1, 78, *(const char **)(v17 + 8));
      if ( v18 && *v18 )
      {
        nptr = v18;
        v14 = strtol(v18, &nptr, 10);
        ++nptr;
        v13 = strtol(nptr, &nptr, 10);
        ++nptr;
        v12 = strtol(nptr, &nptr, 16);
        ++nptr;
        v11 = strtoul(nptr, &nptr, 16);
        v10 = v13 * *(_DWORD *)(all_created_runtime[v14] + 392);
        V_LOCK();
        logfmt_raw(
          v6,
          0x1000u,
          0,
          "%s: set chain_offset %d chain %d chip %d chipaddr %x reg %x to %08x",
          "set_chipreg_old",
          v14,
          *(_DWORD *)(all_created_runtime[v14] + 272),
          v13,
          v10,
          v12,
          v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "set_chipreg_old",
          15,
          2243,
          40,
          v6);
        memset(s, 0, sizeof(s));
        LOBYTE(s[2]) = 0;
        BYTE1(s[2]) = v10;
        HIWORD(s[2]) = v12;
        s[0] = v11;
        return (*(int (__fastcall **)(_DWORD, _DWORD *))(all_created_runtime[v14] + 296))(all_created_runtime[v14], s);
      }
      else
      {
        return -2147483646;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "%s: input bad api param", "set_chipreg_old");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "set_chipreg_old",
        15,
        2228,
        100,
        v6);
      return -2147483646;
    }
  }
  else
  {
    sub_2DE54(a1, 0, 10, "No ASCs");
    return -2147483647;
  }
}
