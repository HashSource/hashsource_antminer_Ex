int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v4; // r0
  const char *v5; // r2
  int v6; // r3
  const char *v7; // r12
  bool v8; // zf
  int v9; // t1
  _BOOL4 v10; // r1
  const char *v11; // r4
  const char *v12; // r0
  int *v13; // r9
  int *v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r12
  int *v18; // r5
  int v19; // r6
  unsigned int v20; // lr
  int v21; // r1
  int v22; // t1
  int v23; // r2
  char **v24; // r3
  char *v25; // t1
  char *v26; // r2
  char *v27; // r3
  int v28; // r1
  int v29; // r5
  char **v30; // r3
  int i; // r2
  char *v32; // t1
  size_t v33; // r0
  size_t v34; // r7
  int v35; // r11
  time_t v36; // r0
  int v37; // r3
  time_t v38; // r5
  int v40; // r6
  const char **v41; // r7
  int v42; // t1
  int v43; // r0
  bool v44; // r3
  char *v45; // r0
  int v46; // r3
  bool v47; // zf
  unsigned int v48; // r3
  int v49; // r2
  int v50; // r3
  char *v51; // r0
  int v52; // r3
  int v53; // t1
  bool v54; // zf
  unsigned int v55; // r3
  int v56; // r2
  bool v58; // zf
  int v59; // r2
  int v60; // r3
  _DWORD *v61; // r1
  int v62; // r3
  int v63; // t1
  bool v64; // zf
  unsigned int v65; // r3
  int v66; // r2
  int v67; // r3
  int v68; // r0
  size_t v69; // r11
  int v70; // r6
  int v71; // r2
  bool v72; // zf
  char v73; // r3
  int v74; // r3
  const char *v75; // r1
  char *v76; // r7
  int v77; // r2
  const char *v78; // t1
  int v79; // r9
  int v80; // r0
  unsigned int v82; // r7
  int v83; // r6
  int *v84; // r3
  bool v85; // zf
  int v86; // r8
  double v87; // d7
  double v88; // d8
  int v89; // r12
  double v90; // d6
  double v91; // d5
  unsigned int v92; // r3
  double v93; // d7
  double v94; // d5
  int v95; // r1
  FILE *v96; // r0
  FILE *v97; // r5
  unsigned int v98; // r3
  int v99; // r12
  unsigned int v100; // lr
  unsigned int v101; // r2
  FILE *v102; // r4
  int *v103; // [sp+20h] [bp-23Ch]
  int v105; // [sp+28h] [bp-234h]
  int v106; // [sp+2Ch] [bp-230h]
  int v107; // [sp+30h] [bp-22Ch]
  int v108; // [sp+34h] [bp-228h]
  int *v110; // [sp+40h] [bp-21Ch]
  time_t v111; // [sp+44h] [bp-218h]
  int v112; // [sp+4Ch] [bp-210h] BYREF
  _DWORD v113[2]; // [sp+50h] [bp-20Ch] BYREF
  _DWORD s[127]; // [sp+58h] [bp-204h] BYREF
  char v115; // [sp+257h] [bp-5h]

  v4 = lzo_pclock_open_default(&dword_43518);
  v5 = *argv;
  v6 = *(unsigned __int8 *)*argv;
  off_430BC = *argv;
  if ( v6 )
  {
    v7 = v5;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v8 = v6 == 92;
        if ( v6 != 92 )
          v8 = v6 == 47;
        v9 = *(unsigned __int8 *)++v5;
        v6 = v9;
        v10 = v8;
        if ( !v10 )
          break;
        if ( !v6 )
          goto LABEL_11;
        v4 = v10;
        v7 = v5;
      }
    }
    while ( v6 );
LABEL_11:
    if ( v4 )
      off_430BC = v7;
  }
  v11 = (const char *)lzo_version_string(v4);
  v12 = (const char *)lzo_version_date();
  printf("\nLZO real-time data compression library (v%s, %s).\n", v11, v12);
  puts("Copyright (C) 1996-2017 Markus Franz Xaver Johannes Oberhumer\nAll Rights Reserved.\n");
  if ( _lzo_init_v2(8352, 2, 4, 4, 4, 4, 4, 4, 4, 24) )
  {
    puts("internal error - lzo_init() failed !!!");
    puts(
      "(this usually indicates a compiler bug - try recompiling\n"
      "without optimizations, and enable `-DLZO_DEBUG' for diagnostics)");
    exit(1);
  }
  v13 = &dword_430E8;
  dword_4350C = 0x4000000;
  dword_43510 = 0x40000;
  if ( argc <= 1 )
    sub_14610(off_430BC, -1, 0);
  v14 = s;
  memset(s, 0, 0x38u);
  s[1] = off_430BC;
  s[8] = argc;
  s[4] = sub_13B6C;
  s[5] = 1;
  s[9] = argv;
  s[6] = -1;
  while ( 1 )
  {
    v15 = lzo_getopt(s, &unk_30920, &off_307D0, 0);
    if ( v15 < 0 )
      break;
    if ( v15 == 100 )
      goto LABEL_66;
    if ( v15 <= 100 )
    {
      if ( v15 == 70 )
      {
        opt_use_asm_fast_decompressor = 1;
      }
      else if ( v15 > 70 )
      {
        if ( v15 == 83 )
        {
          opt_use_safe_decompressor = 1;
        }
        else if ( v15 <= 83 )
        {
          if ( v15 == 76 )
          {
            v102 = (FILE *)stdout;
            fflush((FILE *)stdout);
            fflush((FILE *)stderr);
            fwrite(
              "   The LZO library is free software; you can redistribute it and/or\n"
              "   modify it under the terms of the GNU General Public License as\n"
              "   published by the Free Software Foundation; either version 2 of\n"
              "   the License, or (at your option) any later version.\n"
              "\n"
              "   The LZO library is distributed in the hope that it will be useful,\n"
              "   but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
              "   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
              "   GNU General Public License for more details.\n",
              1u,
              0x1F9u,
              v102);
            fwrite(
              "\n"
              "   You should have received a copy of the GNU General Public License\n"
              "   along with the LZO library; see the file COPYING.\n"
              "   If not, write to the Free Software Foundation, Inc.,\n"
              "   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\n"
              "\n"
              "   Markus F.X.J. Oberhumer\n"
              "   <markus@oberhumer.com>\n"
              "   http://www.oberhumer.com/opensource/lzo/\n"
              "\n",
              1u,
              0x156u,
              v102);
            fflush(v102);
            exit(0);
          }
          if ( v15 <= 76 )
          {
            if ( v15 == 72 )
LABEL_325:
              sub_14610(off_430BC, 0, 0);
LABEL_296:
            fprintf((FILE *)stderr, "%s: internal error in getopt (%d)\n", (const char *)off_430BC, v15);
LABEL_34:
            exit(1);
          }
          if ( v15 == 79 )
          {
            opt_optimize_compressed_data = 1;
          }
          else
          {
            if ( v15 != 81 )
              goto LABEL_296;
            opt_verbose = 0;
          }
        }
        else
        {
          if ( v15 == 86 )
            goto LABEL_307;
          if ( v15 <= 86 )
          {
            if ( v15 != 84 )
              goto LABEL_296;
            ++opt_totals;
          }
          else if ( v15 == 98 )
          {
            dword_43510 = 0;
            if ( s[3] )
            {
              if ( (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
                goto LABEL_34;
              dword_43510 = strtol((const char *)s[3], 0, 10);
            }
          }
          else
          {
            if ( v15 != 99 )
              goto LABEL_296;
LABEL_289:
            if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
              goto LABEL_34;
            opt_c_loops = strtol((const char *)s[3], 0, 10);
          }
        }
      }
      else
      {
        if ( v15 == 63 )
          goto LABEL_325;
        if ( v15 > 63 )
        {
          if ( v15 == 65 )
          {
            opt_use_asm_decompressor = 1;
          }
          else if ( v15 < 65 )
          {
            opt_read_from_stdin = 1;
          }
          else
          {
            if ( v15 == 67 )
              goto LABEL_289;
            if ( v15 != 68 )
              goto LABEL_296;
LABEL_66:
            if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
              goto LABEL_34;
            opt_d_loops = strtol((const char *)s[3], 0, 10);
          }
        }
        else
        {
          if ( v15 > 57 )
          {
            if ( v15 != 58 )
              goto LABEL_296;
            goto LABEL_34;
          }
          if ( v15 < 49 )
          {
            if ( v15 )
              goto LABEL_296;
            goto LABEL_34;
          }
          if ( s[11] )
          {
            sub_14AD0(*(_DWORD *)(s[9] + 4 * s[5]) + s[11] - 1);
            s[11] = 0;
            ++s[5];
          }
          else
          {
            LOWORD(v113[0]) = (unsigned __int8)v15;
            sub_14AD0(v113);
          }
        }
      }
    }
    else if ( v15 == 514 )
    {
LABEL_311:
      if ( !s[3] || !*(_BYTE *)s[3] )
        goto LABEL_34;
      opt_corpus_path = s[3];
      opt_corpus = (int)&off_30610;
    }
    else if ( v15 <= 514 )
    {
      if ( v15 == 115 )
        goto LABEL_311;
      if ( v15 > 115 )
      {
        if ( v15 == 342 )
LABEL_307:
          exit(0);
        if ( v15 <= 342 )
        {
          if ( v15 != 118 )
            goto LABEL_296;
          ++opt_verbose;
        }
        else
        {
          if ( v15 == 360 )
            goto LABEL_325;
          if ( v15 != 513 )
            goto LABEL_296;
          opt_compute_adler32 = 1;
        }
      }
      else if ( v15 == 109 )
      {
        sub_14AD0(s[3]);
      }
      else
      {
        if ( v15 <= 109 )
        {
          if ( v15 == 104 )
            goto LABEL_325;
          goto LABEL_296;
        }
        if ( v15 == 110 )
        {
          if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
            goto LABEL_34;
          opt_d_loops = strtol((const char *)s[3], 0, 10);
          opt_c_loops = opt_d_loops;
        }
        else
        {
          if ( v15 != 113 )
            goto LABEL_296;
          --opt_verbose;
        }
      }
    }
    else if ( v15 == 519 )
    {
      opt_execution_time = 1;
    }
    else if ( v15 >= 520 )
    {
      if ( v15 == 521 )
      {
        if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
          goto LABEL_34;
        opt_max_dict_len = strtol((const char *)s[3], 0, 10);
      }
      else if ( v15 <= 520 )
      {
        if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
          goto LABEL_34;
        dword_4350C = strtol((const char *)s[3], 0, 10);
      }
      else if ( v15 == 522 )
      {
        if ( !s[3] || !*(_BYTE *)s[3] )
          goto LABEL_34;
        opt_corpus_path = s[3];
        opt_corpus = (int)&unk_30700;
      }
      else
      {
        if ( v15 != 523 )
          goto LABEL_296;
        if ( !s[3] || (unsigned int)*(unsigned __int8 *)s[3] - 48 > 9 )
          goto LABEL_34;
        v16 = strtol((const char *)s[3], 0, 10);
        if ( v16 > 0 )
          dword_4351C = v16;
        opt_pclock = v16;
      }
    }
    else if ( v15 == 516 )
    {
      opt_compute_crc32 = 1;
    }
    else if ( v15 < 516 )
    {
      opt_clear_wrkmem = 1;
    }
    else if ( v15 == 517 )
    {
      opt_dict = 1;
      opt_dictionary_file = s[3];
    }
    else
    {
      opt_dump_compressed_data = s[3];
    }
  }
  v106 = s[5];
  if ( !dword_43104 )
    sub_14378(default_method);
  if ( dword_43104 > 1 && opt_read_from_stdin )
  {
    printf("%s: cannot use multiple methods and '-@'\n", (const char *)off_430BC);
    goto LABEL_34;
  }
  if ( !dword_43510 || dword_43510 > (unsigned int)dword_4350C )
    dword_43510 = dword_4350C;
  v17 = 0;
  dword_43598 = 0;
  if ( opt_c_loops <= 0 )
    opt_c_loops = 1;
  if ( opt_d_loops <= 0 )
    opt_d_loops = 1;
  if ( dword_43104 > 0 )
  {
    v18 = &dword_43108;
    v19 = 0;
    v20 = 0;
    do
    {
      v22 = *v18++;
      v21 = v22;
      v23 = 21;
      v24 = &off_2F870;
      while ( v21 != v23 )
      {
        if ( v24 == (char **)&unk_30558 || (v25 = v24[14], v24 += 14, !v25) )
        {
          if ( v19 )
            dword_43598 = v20;
          _assert_fail(
            "c != NULL",
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/lzo-2.10/l"
            "zotest/lzotest.c",
            0x7B2u,
            "main");
        }
        v23 = (int)v24[1];
      }
      v26 = v24[2];
      ++v17;
      v27 = v24[3];
      if ( (unsigned int)v26 > v20 )
      {
        v20 = (unsigned int)v26;
        v19 = 1;
      }
      if ( (unsigned int)v27 > v20 )
      {
        v20 = (unsigned int)v27;
        v19 = 1;
      }
    }
    while ( dword_43104 != v17 );
    if ( v19 )
      dword_43598 = v20;
  }
  sub_140B4(&dword_43594, dword_43598, 0);
  lzo_memset((void *)dword_43594, 0, dword_43598);
  sub_140B4(&dword_43558, dword_43510 + 256 + ((unsigned int)dword_43510 >> 3), 16);
  if ( opt_use_asm_fast_decompressor )
    v28 = 3;
  else
    v28 = 0;
  sub_140B4(&dword_43578, dword_43510 + v28, 16);
  if ( opt_dict )
  {
    opt_optimize_compressed_data = 0;
    if ( (unsigned int)(opt_max_dict_len - 1) > 0xBFFD )
      v95 = 49151;
    else
      v95 = opt_max_dict_len;
    sub_140B4(&dword_430E8, v95, 0);
    if ( opt_dictionary_file )
    {
      dword_430EC = 0;
      v96 = (FILE *)fopen64(opt_dictionary_file, "rb");
      v97 = v96;
      if ( v96 )
      {
        dword_430EC = fread((void *)dword_430E8, 1u, dword_430FC, v96);
        fclose(v97);
        dword_430F0 = lzo_adler32(1, dword_430E8, dword_430EC);
      }
      if ( !dword_430EC )
      {
LABEL_278:
        dword_430EC = 4096;
        if ( (unsigned int)dword_430FC < 0x1000 )
          dword_430EC = dword_430FC;
        lzo_memset((void *)dword_430E8, 0, dword_430EC);
        v98 = 0;
        v99 = 0;
LABEL_281:
        v100 = v98 + 16;
        v101 = v98;
        while ( dword_430EC > v98 )
        {
          ++v98;
          *(_BYTE *)(dword_430E8 + v101) = v99;
          if ( v100 == v98 )
          {
            if ( ++v99 != 256 )
              goto LABEL_281;
            break;
          }
          v101 = v98;
        }
        dword_430F0 = lzo_adler32(1, dword_430E8, dword_430EC);
        printf("Using default dictionary, %lu bytes, ID 0x%08lx.\n", dword_430EC, dword_430F0);
        goto LABEL_105;
      }
      printf(
        "Using dictionary '%s', %lu bytes, ID 0x%08lx.\n",
        (const char *)opt_dictionary_file,
        dword_430EC,
        dword_430F0);
    }
    if ( dword_430EC )
      goto LABEL_105;
    goto LABEL_278;
  }
LABEL_105:
  v111 = time(0);
  if ( dword_43104 <= 0 )
  {
    v35 = 0;
    goto LABEL_121;
  }
  v103 = &dword_43108;
  v105 = 0;
  while ( 2 )
  {
    v29 = *v103++;
    if ( argc <= v106 && !v13[340] && !v13[343] )
      sub_14610(off_430BC, -1, 0);
    if ( !v105 && opt_verbose > 0 )
      printf("%lu block-size\n\n", v13[266]);
    v30 = &off_2F870;
    for ( i = 21; v29 != i; i = (int)v30[1] )
    {
      if ( &unk_30558 != (_UNKNOWN *)v30 )
      {
        v32 = v30[14];
        v30 += 14;
        if ( v32 )
          continue;
      }
      _assert_fail(
        "find_method_by_id(method) != NULL",
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/lzo-2.10/lzotest/lzotest.c",
        0x7E1u,
        "main");
    }
    if ( !v13[340] )
    {
      if ( argc <= v106 )
      {
LABEL_138:
        v35 = 0;
LABEL_139:
        if ( !v13[343] )
          goto LABEL_205;
LABEL_140:
        if ( !v35 )
        {
          while ( fgets((char *)s, 511, (FILE *)stdin) )
          {
            v115 = 0;
            v45 = (char *)s + strlen((const char *)s);
            if ( v45 > (char *)s )
            {
              v46 = (unsigned __int8)*(v45 - 1);
              v47 = v46 == 32;
              if ( v46 != 32 )
                v47 = v46 == 13;
              v48 = v46 - 9;
              v49 = v47;
              if ( v48 <= 1 )
                v50 = v49 | 1;
              else
                v50 = v49;
              if ( v50 )
              {
                v51 = v45 - 1;
                do
                {
                  *v51 = 0;
                  if ( s == (_DWORD *)v51 )
                    break;
                  v53 = (unsigned __int8)*--v51;
                  v52 = v53;
                  v54 = v53 == 13;
                  if ( v53 != 13 )
                    v54 = v52 == 32;
                  v55 = v52 - 9;
                  v56 = v54;
                }
                while ( v55 <= 1 ? v56 | 1 : v56 );
              }
            }
            if ( LOBYTE(s[0]) )
            {
              v58 = LOBYTE(s[0]) == 32;
              if ( LOBYTE(s[0]) != 32 )
                v58 = LOBYTE(s[0]) == 13;
              v59 = v58;
              if ( (unsigned int)LOBYTE(s[0]) - 9 <= 1 )
                v60 = v59 | 1;
              else
                v60 = v59;
              v61 = s;
              if ( v60 )
              {
                while ( 1 )
                {
                  v63 = *((unsigned __int8 *)v61 + 1);
                  v61 = (_DWORD *)((char *)v61 + 1);
                  v62 = v63;
                  if ( !v63 )
                    break;
                  v64 = v62 == 13;
                  if ( v62 != 13 )
                    v64 = v62 == 32;
                  v65 = v62 - 9;
                  v66 = v64;
                  if ( v65 <= 1 )
                    v67 = v66 | 1;
                  else
                    v67 = v66;
                  if ( !v67 )
                    goto LABEL_183;
                }
              }
              else
              {
LABEL_183:
                v68 = sub_15C94(v29, v61, v13[338], v13[339], 0, 0);
                if ( v68 != 2 )
                {
                  v35 = v68;
                  goto LABEL_140;
                }
              }
            }
          }
          v44 = 1;
          goto LABEL_214;
        }
      }
      else
      {
        v40 = v106;
        do
        {
          v41 = &argv[v40];
          while ( 1 )
          {
            v42 = (int)*v41++;
            ++v40;
            v43 = sub_15C94(v29, v42, v13[338], v13[339], 0, 0);
            if ( v43 != 2 )
              break;
            if ( argc <= v40 )
              goto LABEL_138;
          }
          if ( argc <= v40 )
          {
            v35 = v43;
            goto LABEL_139;
          }
        }
        while ( !v43 );
        v35 = v43;
        if ( !v13[343] )
          goto LABEL_121;
      }
      v44 = 0;
LABEL_214:
      v13[343] = 0;
LABEL_206:
      if ( v13[7] <= ++v105 || !v44 )
        goto LABEL_121;
      continue;
    }
    break;
  }
  v33 = strlen((const char *)v13[340]);
  v34 = v33;
  if ( v33 > 0xF3 )
  {
    v35 = 1;
    goto LABEL_121;
  }
  v69 = v33 + 1;
  v70 = v13[341];
  v107 = v13[338];
  v108 = v13[339];
  memcpy(s, (const void *)v13[340], v33 + 1);
  if ( v34 )
  {
    v71 = *((unsigned __int8 *)&v113[1] + v34 + 3);
    v72 = v71 == 92;
    if ( v71 != 92 )
      v72 = v71 == 47;
    v73 = !v72;
    if ( v71 == 58 )
      v74 = 0;
    else
      v74 = v73 & 1;
    if ( v74 )
    {
      *(_WORD *)((char *)s + v34) = 47;
      v34 = v69;
    }
  }
  v75 = *(const char **)v70;
  if ( !*(_DWORD *)v70 )
  {
LABEL_293:
    v35 = 0;
LABEL_205:
    v44 = v35 == 0;
    goto LABEL_206;
  }
  v76 = (char *)s + v34;
  v110 = v13;
  while ( 1 )
  {
    v79 = *(_DWORD *)(v70 + 4);
    strcpy(v76, v75);
    v80 = sub_15C94(v29, s, v79 * v107, v79 * v108, &v112, v113);
    if ( v80 )
    {
      v13 = v110;
      v35 = v80;
      goto LABEL_205;
    }
    if ( *(_DWORD *)(v70 + 8) != v112 )
    {
      v13 = v110;
      v35 = 4;
      puts("  invalid test suite");
      goto LABEL_121;
    }
    v77 = *(_DWORD *)(v70 + 12);
    if ( v77 )
    {
      if ( v77 != v113[0] )
        break;
    }
    v78 = *(const char **)(v70 + 16);
    v70 += 16;
    v75 = v78;
    if ( !v78 )
    {
      v13 = v110;
      goto LABEL_293;
    }
  }
  v13 = v110;
  v35 = 7;
  printf("  internal checksum error !!  (0x%08lx 0x%08lx)\n", v113[0], v77);
LABEL_121:
  v36 = time(0);
  v37 = v13[342];
  v38 = v36;
  if ( v37 && (opt_verbose > 0 && (unsigned int)v13[315] > 1 || v37 > 1) )
  {
    v82 = v13[315];
    v83 = 6784;
    v84 = (int *)v13[335];
    if ( !v82 )
      v82 = 1;
    v85 = v84 == (int *)1;
    if ( v84 == (int *)1 )
      v84 = (int *)v13[334];
    else
      HIWORD(v83) = 3;
    if ( v85 )
      HIWORD(v83) = 3;
    else
      v103 = (int *)v83;
    if ( v85 )
      v103 = v84;
    sprintf((char *)s, "[clock=%d]", v13[269]);
    if ( !opt_pclock )
      v14 = v103;
    sub_144E8(v113);
    v86 = sub_2F078(v13[317], v82);
    v87 = (double)(unsigned int)v13[318];
    v88 = v87 / (double)v82;
    v89 = sub_2F078(v13[316], v82);
    if ( dbl_435F8 <= 0.00001 )
    {
      v90 = 0.0;
    }
    else
    {
      v87 = (double)(unsigned int)v13[322];
      v90 = v87 / dbl_435F8;
    }
    v91 = 0.00001;
    LODWORD(v87) = v13[328];
    if ( dbl_43610 <= 0.00001 )
      v91 = 0.0;
    else
      v87 = (double)(unsigned int)v13[328];
    if ( dbl_43610 > 0.00001 )
      v91 = v87 / dbl_43610;
    printf("%-13s  %-12s %10lu %4.1f %9lu %4s %8.3f %8.3f\n", v14, "***AVG***", v86, v88, v89, v113, v90, v91);
    v92 = v13[317];
    if ( v92 )
      v90 = (double)v92;
    sub_144E8(v113);
    HIDWORD(v93) = 1055193269;
    LODWORD(v93) = v13[322];
    if ( dbl_435F8 <= 0.00001 )
      v90 = 0.0;
    else
      v93 = (double)LODWORD(v93);
    if ( dbl_435F8 > 0.00001 )
      v90 = v93 / dbl_435F8;
    v94 = 0.00001;
    LODWORD(v93) = v13[328];
    if ( dbl_43610 <= 0.00001 )
      v94 = 0.0;
    else
      v93 = (double)LODWORD(v93);
    if ( dbl_43610 > 0.00001 )
      v94 = v93 / dbl_43610;
    printf(
      "%-13s  %-12s %10lu %4lu %9lu %4s %s%8.3f %8.3f\n",
      v103,
      "***TOTALS***",
      v13[317],
      v13[318],
      v13[316],
      v113,
      v83,
      v90,
      v94);
  }
  if ( v13[345] || v13[7] > 1 && opt_verbose > 0 )
    printf("\n%s: execution time: %lu seconds\n", (const char *)off_430BC, v38 - v111);
  if ( v35 )
    printf("\n%s: exit code: %d\n", (const char *)off_430BC, v35);
  v13[268] = 0;
  v13[271] = 0;
  v13[272] = 0;
  v13[269] = -1;
  return v35;
}
