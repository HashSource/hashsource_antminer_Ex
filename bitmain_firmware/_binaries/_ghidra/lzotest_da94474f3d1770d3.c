// Decompiled: lzotest_da94474f3d1770d3

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00013618();
    return iVar1;
}

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int main(int param_1, undefined4 *param_2)

{
    byte bVar1;
    bool bVar2;
    ulonglong uVar3;
    long lVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    time_t tVar9;
    size_t sVar10;
    time_t tVar11;
    FILE *pFVar12;
    char *pcVar13;
    int iVar14;
    char cVar15;
    int *piVar16;
    byte *pbVar17;
    int *piVar18;
    uint uVar19;
    byte *__s;
    char *pcVar20;
    undefined4 *puVar21;
    int iVar22;
    int unaff_r11;
    char *pcVar23;
    uint uVar24;
    uint uVar25;
    bool bVar26;
    bool bVar27;
    double dVar28;
    double dVar29;
    undefined8 uVar30;
    int *piVar31;
    byte *local_270;
    int local_268;
    int local_244;
    int local_240;
    byte abStack_239[5];
    char *local_234;
    byte *local_22c;
    code *local_228;
    int local_224;
    undefined4 local_220;
    int local_218;
    undefined4 *local_214;
    int local_20c;
    undefined1 local_39;

    lzo_pclock_open_default(&DAT_0002a630);
    DAT_0002a1d4 = (char *)*param_2;
    cVar15 = *DAT_0002a1d4;
    if (cVar15 != '\0') {
        pcVar13 = DAT_0002a1d4;
        pcVar20 = DAT_0002a1d4;
        bVar26 = false;
        do {
            while (true) {
                bVar2 = bVar26;
                pcVar23 = pcVar20;
                bVar26 = cVar15 == '\\';
                bVar27 = cVar15 == '/';
                pcVar13 = pcVar13 + 1;
                cVar15 = *pcVar13;
                if (!bVar26 && !bVar27)
                    break;
                pcVar20 = pcVar13;
                bVar26 = bVar26 || bVar27;
                if (cVar15 == '\0')
                    goto LAB_000124fc;
            }
            pcVar20 = pcVar23;
            bVar26 = bVar2;
        } while (cVar15 != '\0');
    LAB_000124fc:
        if (bVar2) {
            DAT_0002a1d4 = pcVar23;
        }
    }
    uVar5 = lzo_version_string();
    uVar6 = lzo_version_date();
    printf("\nLZO real-time data compression library (v%s, %s).\n", uVar5,
           uVar6);
    puts("Copyright (C) 1996-2017 Markus Franz Xaver Johannes Oberhumer\nAll "
         "Rights Reserved.\n");
    dVar29 = 5.09278989851428e-313;
    pcVar13 = (char *)0x4;
    piVar31 = (int *)0x4;
    uVar30 = 0x400000004;
    iVar7 = __lzo_init_v2(0x20a0, 2, 4, 4, 4, 4, 4, 4, 4, 0x18);
    if (iVar7 == 0) {
        DAT_0002a624 = 0x4000000;
        DAT_0002a628 = 0x40000;
        pcVar20 = DAT_0002a1d4;
        if (1 < param_1) {
            __s = abStack_239 + 1;
            memset(__s, 0, 0x38);
            local_228 = FUN_00013934;
            local_224 = 1;
            local_220 = 0xffffffff;
            pbVar17 = opt_corpus_path;
            piVar18 = opt_corpus;
            local_234 = pcVar20;
            local_218 = param_1;
            local_214 = param_2;
        LAB_000125ec:
            do {
                opt_corpus = piVar18;
                opt_corpus_path = pbVar17;
                iVar8 =
                    lzo_getopt(__s, "Ab::c:C:d:D:FhHLm::n:OqQs:STvV@123456789",
                               &DAT_00018068, 0);
                iVar7 = local_224;
                pFVar12 = stdout;
                if (iVar8 < 0) {
                    if (DAT_0002a21c == 0) {
                        FUN_00014140(default_method);
                    }
                    if ((DAT_0002a21c < 2) || (opt_read_from_stdin == 0)) {
                        if ((DAT_0002a628 == 0) ||
                            (DAT_0002a624 < DAT_0002a628)) {
                            DAT_0002a628 = DAT_0002a624;
                        }
                        iVar8 = 0;
                        DAT_0002a6b0 = 0;
                        if (opt_c_loops < 1) {
                            opt_c_loops = 1;
                        }
                        if (opt_d_loops < 1) {
                            opt_d_loops = 1;
                        }
                        if (0 < DAT_0002a21c) {
                            bVar26 = false;
                            uVar24 = 0;
                            piVar18 = &DAT_0002a220;
                            do {
                                iVar14 = 0x15;
                                piVar16 = (int *)&UNK_00017108;
                                while (*piVar18 != iVar14) {
                                    if ((piVar16 == (int *)&DAT_00017df0) ||
                                        (piVar16[0xe] == 0)) {
                                        if (bVar26) {
                                            DAT_0002a6b0 = uVar24;
                                        }
                                        /* WARNING: Subroutine does not return
                                         */
                                        __assert_fail(
                                            "c != NULL",
                                            "/workspace/jenkins/jenkins/"
                                            "workspace/Antminer_E9-Pro_debug/"
                                            "build/rootfs/buildroot/tmp/debug/"
                                            "build/lzo-2.10/lzotest/lzotest.c",
                                            0x7b2, "main");
                                    }
                                    iVar14 = piVar16[0xf];
                                    piVar16 = piVar16 + 0xe;
                                }
                                iVar8 = iVar8 + 1;
                                if (uVar24 < (uint)piVar16[2]) {
                                    bVar26 = true;
                                    uVar24 = piVar16[2];
                                }
                                if (uVar24 < (uint)piVar16[3]) {
                                    bVar26 = true;
                                    uVar24 = piVar16[3];
                                }
                                piVar18 = piVar18 + 1;
                            } while (DAT_0002a21c != iVar8);
                            if (bVar26) {
                                DAT_0002a6b0 = uVar24;
                            }
                        }
                        FUN_00013e7c(&DAT_0002a6ac, DAT_0002a6b0, 0);
                        lzo_memset(DAT_0002a6ac, 0, DAT_0002a6b0);
                        FUN_00013e7c(&DAT_0002a670,
                                     DAT_0002a628 + 0x100 + (DAT_0002a628 >> 3),
                                     0x10);
                        if (opt_use_asm_fast_decompressor == 0) {
                            iVar8 = 0;
                        } else {
                            iVar8 = 3;
                        }
                        FUN_00013e7c(&DAT_0002a690, DAT_0002a628 + iVar8, 0x10);
                        if (opt_dict != 0) {
                            opt_optimize_compressed_data = 0;
                            iVar8 = opt_max_dict_len;
                            if (0xbffd < opt_max_dict_len - 1U) {
                                iVar8 = 0xbfff;
                            }
                            FUN_00013e7c(&DAT_0002a200, iVar8, 0, 0);
                            if (opt_dictionary_file == (byte *)0x0) {
                            LAB_000134e0:
                                if (DAT_0002a204 != 0)
                                    goto LAB_000129a8;
                            } else {
                                DAT_0002a204 = 0;
                                pFVar12 =
                                    fopen64((char *)opt_dictionary_file, "rb");
                                if (pFVar12 != (FILE *)0x0) {
                                    DAT_0002a204 = fread(DAT_0002a200, 1,
                                                         DAT_0002a214, pFVar12);
                                    fclose(pFVar12);
                                    DAT_0002a208 = lzo_adler32(1, DAT_0002a200,
                                                               DAT_0002a204);
                                }
                                if (DAT_0002a204 != 0) {
                                    printf("Using dictionary \'%s\', %lu "
                                           "bytes, ID 0x%08lx.\n",
                                           opt_dictionary_file, DAT_0002a204,
                                           DAT_0002a208);
                                    goto LAB_000134e0;
                                }
                            }
                            DAT_0002a204 = 0x1000;
                            if (DAT_0002a214 < 0x1000) {
                                DAT_0002a204 = DAT_0002a214;
                            }
                            lzo_memset(DAT_0002a200, 0, DAT_0002a204);
                            uVar24 = 0;
                            iVar8 = 0;
                            do {
                                uVar25 = uVar24 + 0x10;
                                uVar19 = uVar24;
                                do {
                                    if (DAT_0002a204 <= uVar19)
                                        goto LAB_00013268;
                                    uVar24 = uVar19 + 1;
                                    *(char *)((int)DAT_0002a200 + uVar19) =
                                        (char)iVar8;
                                    uVar19 = uVar24;
                                } while (uVar25 != uVar24);
                                iVar8 = iVar8 + 1;
                            } while (iVar8 != 0x100);
                        LAB_00013268:
                            DAT_0002a208 =
                                lzo_adler32(1, DAT_0002a200, DAT_0002a204);
                            printf("Using default dictionary, %lu bytes, ID "
                                   "0x%08lx.\n",
                                   DAT_0002a204, DAT_0002a208);
                        }
                    LAB_000129a8:
                        tVar9 = time((time_t *)0x0);
                        if (DAT_0002a21c < 1) {
                            unaff_r11 = 0;
                            goto LAB_00012a9c;
                        }
                        local_270 = (byte *)&DAT_0002a220;
                        local_268 = 0;
                        do {
                            pbVar17 = local_270 + 4;
                            iVar8 = *(int *)local_270;
                            local_270 = pbVar17;
                            if (((iVar7 < param_1) ||
                                 (opt_corpus_path != (byte *)0x0)) ||
                                (opt_read_from_stdin != 0)) {
                                if ((local_268 == 0) && (0 < opt_verbose)) {
                                    printf("%lu block-size\n\n", DAT_0002a628);
                                }
                                pbVar17 = opt_corpus_path;
                                iVar14 = 0x15;
                                piVar18 = (int *)&UNK_00017108;
                                while (iVar8 != iVar14) {
                                    if ((piVar18 == (int *)&DAT_00017df0) ||
                                        (piVar18[0xe] == 0)) {
                                        /* WARNING: Subroutine does not return
                                         */
                                        __assert_fail(
                                            "find_method_by_id(method) != NULL",
                                            "/workspace/jenkins/jenkins/"
                                            "workspace/Antminer_E9-Pro_debug/"
                                            "build/rootfs/buildroot/tmp/debug/"
                                            "build/lzo-2.10/lzotest/lzotest.c",
                                            0x7e1, "main");
                                    }
                                    iVar14 = piVar18[0xf];
                                    piVar18 = piVar18 + 0xe;
                                }
                                if (opt_corpus_path == (byte *)0x0) {
                                    iVar14 = iVar7;
                                    if (iVar7 < param_1) {
                                        do {
                                            puVar21 = param_2 + iVar14;
                                            while (true) {
                                                iVar14 = iVar14 + 1;
                                                uVar30 = 0;
                                                unaff_r11 = FUN_00015a5c(
                                                    iVar8, *puVar21,
                                                    opt_c_loops, opt_d_loops, 0,
                                                    0);
                                                if (unaff_r11 != 2)
                                                    break;
                                                puVar21 = puVar21 + 1;
                                                if (param_1 <= iVar14)
                                                    goto LAB_00012bb8;
                                            }
                                            if (param_1 <= iVar14)
                                                goto LAB_00012bbc;
                                        } while (unaff_r11 == 0);
                                        if (opt_read_from_stdin == 0)
                                            goto LAB_00012a9c;
                                    } else {
                                    LAB_00012bb8:
                                        unaff_r11 = 0;
                                    LAB_00012bbc:
                                        iVar14 = unaff_r11;
                                        if (opt_read_from_stdin == 0)
                                            goto LAB_00012e10;
                                        while (unaff_r11 = iVar14,
                                               unaff_r11 == 0) {
                                        LAB_00012bd8:
                                            do {
                                                do {
                                                    pcVar20 =
                                                        fgets((char *)__s,
                                                              0x1ff, stdin);
                                                    if (pcVar20 == (char *)0x0)
                                                        goto LAB_00012e5c;
                                                    local_39 = 0;
                                                    sVar10 =
                                                        strlen((char *)__s);
                                                    if ((__s < __s + sVar10) &&
                                                        (uVar24 =
                                                             (uint)abStack_239
                                                                 [sVar10],
                                                         uVar24 - 9 < 2 ||
                                                             (uVar24 == 0x20 ||
                                                              uVar24 == 0xd))) {
                                                        pbVar17 = abStack_239 +
                                                                  sVar10;
                                                        do {
                                                            *pbVar17 = 0;
                                                            if (__s == pbVar17)
                                                                break;
                                                            pbVar17 =
                                                                pbVar17 + -1;
                                                            uVar24 =
                                                                (uint)*pbVar17;
                                                        } while (
                                                            uVar24 - 9 < 2 ||
                                                            (uVar24 == 0xd ||
                                                             uVar24 == 0x20));
                                                    }
                                                    uVar24 =
                                                        (uint)abStack_239[1];
                                                } while (uVar24 == 0);
                                                pbVar17 = __s;
                                                if (uVar24 - 9 < 2 ||
                                                    (uVar24 == 0x20 ||
                                                     uVar24 == 0xd)) {
                                                    do {
                                                        pbVar17 = pbVar17 + 1;
                                                        uVar24 = (uint)*pbVar17;
                                                        if (uVar24 == 0)
                                                            goto LAB_00012bd8;
                                                    } while (uVar24 - 9 < 2 ||
                                                             (uVar24 == 0xd ||
                                                              uVar24 == 0x20));
                                                }
                                                uVar30 = 0;
                                                iVar14 = FUN_00015a5c(
                                                    iVar8, pbVar17, opt_c_loops,
                                                    opt_d_loops, 0, 0);
                                            } while (iVar14 == 2);
                                        }
                                    }
                                    bVar26 = false;
                                    goto LAB_00012e60;
                                }
                                sVar10 = strlen((char *)opt_corpus_path);
                                piVar18 = opt_corpus;
                                lVar4 = opt_d_loops;
                                iVar14 = opt_c_loops;
                                if (0xf3 < sVar10) {
                                    unaff_r11 = 1;
                                    goto LAB_00012a9c;
                                }
                                memcpy(__s, pbVar17, sVar10 + 1);
                                if ((sVar10 != 0) &&
                                    (bVar1 = abStack_239[sVar10],
                                     bVar1 != 0x3a &&
                                         (bVar1 != 0x5c && bVar1 != 0x2f))) {
                                    (__s + sVar10)[0] = 0x2f;
                                    (__s + sVar10)[1] = 0;
                                    sVar10 = sVar10 + 1;
                                }
                                pcVar20 = (char *)*piVar18;
                                if (pcVar20 != (char *)0x0) {
                                    do {
                                        iVar22 = piVar18[1];
                                        strcpy((char *)(__s + sVar10), pcVar20);
                                        uVar30 =
                                            CONCAT44(&local_240, &local_244);
                                        unaff_r11 = FUN_00015a5c(
                                            iVar8, __s, iVar22 * iVar14,
                                            iVar22 * lVar4, &local_244,
                                            &local_240);
                                        if (unaff_r11 != 0)
                                            goto LAB_00012e10;
                                        if (piVar18[2] != local_244) {
                                            unaff_r11 = 4;
                                            puts("  invalid test suite");
                                            goto LAB_00012a9c;
                                        }
                                        if ((piVar18[3] != 0) &&
                                            (piVar18[3] != local_240)) {
                                            unaff_r11 = 7;
                                            printf("  internal checksum error "
                                                   "!!  (0x%08lx 0x%08lx)\n");
                                            goto LAB_00012a9c;
                                        }
                                        piVar18 = piVar18 + 4;
                                        pcVar20 = (char *)*piVar18;
                                    } while (pcVar20 != (char *)0x0);
                                }
                                unaff_r11 = 0;
                            LAB_00012e10:
                                bVar26 = unaff_r11 == 0;
                            } else {
                                FUN_000143d8(DAT_0002a1d4, 0xffffffff);
                            LAB_00012e5c:
                                bVar26 = true;
                            LAB_00012e60:
                                opt_read_from_stdin = 0;
                            }
                            local_268 = local_268 + 1;
                            if (DAT_0002a21c <= local_268) {
                                bVar26 = false;
                            }
                            if (!bVar26) {
                            LAB_00012a9c:
                                tVar11 = time((time_t *)0x0);
                                if ((opt_totals != 0) &&
                                    (((0 < opt_verbose && (1 < DAT_0002a6ec)) ||
                                      (1 < opt_totals)))) {
                                    uVar24 = DAT_0002a6ec;
                                    if (DAT_0002a6ec == 0) {
                                        uVar24 = 1;
                                    }
                                    pbVar17 = DAT_0002a738;
                                    if (DAT_0002a73c != (byte *)0x1) {
                                        local_270 = (byte *)0x19318;
                                        pbVar17 = DAT_0002a73c;
                                    }
                                    pcVar13 = "";
                                    if (DAT_0002a73c == (byte *)0x1) {
                                        local_270 = pbVar17;
                                    }
                                    piVar31 = &local_240;
                                    sprintf((char *)__s, "[clock=%d]",
                                            DAT_0002a634);
                                    if (opt_pclock == 0) {
                                        __s = local_270;
                                    }
                                    FUN_000142b0(
                                        SUB84(DAT_0002a700 / (double)uVar24, 0),
                                        piVar31);
                                    uVar5 = FUN_00016910(DAT_0002a6f4, uVar24);
                                    uVar3 = (ulonglong)DAT_0002a6f8;
                                    uVar6 = FUN_00016910(DAT_0002a6f0, uVar24);
                                    if (1e-05 < DAT_0002a710) {
                                        dVar29 =
                                            (double)DAT_0002a708 / DAT_0002a710;
                                    } else {
                                        dVar29 = 0.0;
                                    }
                                    if (1e-05 < DAT_0002a728) {
                                        dVar28 =
                                            (double)DAT_0002a720 / DAT_0002a728;
                                    } else {
                                        dVar28 = 0.0;
                                    }
                                    printf("%-13s  %-12s %10lu %4.1f %9lu %4s "
                                           "%8.3f %8.3f\n",
                                           __s, "***AVG***", uVar5,
                                           (double)uVar3 / (double)uVar24,
                                           uVar6, piVar31, dVar29, dVar28);
                                    if (DAT_0002a6f4 == 0) {
                                        uVar5 = 0;
                                    } else {
                                        uVar5 = SUB84(
                                            ((double)DAT_0002a6f0 * 100.0) /
                                                (double)DAT_0002a6f4,
                                            0);
                                    }
                                    FUN_000142b0(uVar5, piVar31);
                                    if (1e-05 < DAT_0002a710) {
                                        dVar29 =
                                            (double)DAT_0002a708 / DAT_0002a710;
                                    } else {
                                        dVar29 = 0.0;
                                    }
                                    if (1e-05 < DAT_0002a728) {
                                        dVar28 =
                                            (double)DAT_0002a720 / DAT_0002a728;
                                    } else {
                                        dVar28 = 0.0;
                                    }
                                    uVar30 =
                                        CONCAT44(DAT_0002a6f0, DAT_0002a6f8);
                                    printf("%-13s  %-12s %10lu %4lu %9lu %4s "
                                           "%s%8.3f %8.3f\n",
                                           local_270, "***TOTALS***",
                                           DAT_0002a6f4, DAT_0002a6f8,
                                           DAT_0002a6f0, piVar31, "", dVar29,
                                           dVar28);
                                }
                                if ((opt_execution_time != 0) ||
                                    ((1 < DAT_0002a21c && (0 < opt_verbose)))) {
                                    printf(
                                        "\n%s: execution time: %lu seconds\n",
                                        DAT_0002a1d4, tVar11 - tVar9,
                                        &DAT_0002a1d4, uVar30, piVar31, pcVar13,
                                        dVar29);
                                }
                                if (unaff_r11 != 0) {
                                    printf("\n%s: exit code: %d\n",
                                           DAT_0002a1d4, unaff_r11,
                                           &DAT_0002a1d4, uVar30, piVar31,
                                           pcVar13, dVar29);
                                }
                                DAT_0002a630 = 0;
                                DAT_0002a63c = 0;
                                DAT_0002a640 = 0;
                                DAT_0002a634 = -1;
                                return unaff_r11;
                            }
                        } while (true);
                    }
                    printf("%s: cannot use multiple methods and \'-@\'\n",
                           DAT_0002a1d4);
                LAB_00012698:
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                if (iVar8 == 100) {
                LAB_000127cc:
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_00012698;
                    opt_d_loops = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                    goto LAB_000125ec;
                }
                pbVar17 = opt_corpus_path;
                piVar18 = opt_corpus;
                if (iVar8 < 0x65) {
                    if (iVar8 != 0x46) {
                        if (iVar8 < 0x47) {
                            if (iVar8 == 0x3f)
                                goto LAB_0001351c;
                            if (iVar8 < 0x40) {
                                if (0x39 < iVar8) {
                                    if (iVar8 != 0x3a) {
                                    LAB_0001332c:
                                        fprintf(stderr,
                                                "%s: internal error in getopt "
                                                "(%d)\n",
                                                DAT_0002a1d4, iVar8);
                                    }
                                    goto LAB_00012698;
                                }
                                if (iVar8 < 0x31) {
                                    if (iVar8 != 0)
                                        goto LAB_0001332c;
                                    goto LAB_00012698;
                                }
                                if (local_20c == 0) {
                                    local_240._0_2_ = (ushort)(byte)iVar8;
                                    FUN_00014898(&local_240);
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                } else {
                                    FUN_00014898(local_214[local_224] +
                                                 local_20c + -1);
                                    local_20c = 0;
                                    local_224 = local_224 + 1;
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                }
                                goto LAB_000125ec;
                            }
                            if (iVar8 == 0x41) {
                                opt_use_asm_decompressor = 1;
                                goto LAB_000125ec;
                            }
                            if (iVar8 < 0x41) {
                                opt_read_from_stdin = 1;
                                goto LAB_000125ec;
                            }
                            if (iVar8 != 0x43) {
                                if (iVar8 == 0x44)
                                    goto LAB_000127cc;
                                goto LAB_0001332c;
                            }
                        } else {
                            if (iVar8 == 0x53) {
                                opt_use_safe_decompressor = 1;
                                goto LAB_000125ec;
                            }
                            if (iVar8 < 0x54) {
                                if (iVar8 == 0x4c) {
                                    fflush(stdout);
                                    fflush(stderr);
                                    fwrite(
                                        "   The LZO library is free software; "
                                        "you can redistribute it and/or\n   "
                                        "modify it under the terms of the GNU "
                                        "General Public License as\n   "
                                        "published by the Free Software "
                                        "Foundation; either version 2 of\n   "
                                        "the License, or (at your option) any "
                                        "later version.\n\n   The LZO library "
                                        "is distributed in the hope that it "
                                        "will be useful,\n   but WITHOUT ANY "
                                        "WARRANTY; without even the implied "
                                        "warranty of\n   MERCHANTABILITY or "
                                        "FITNESS FOR A PARTICULAR PURPOSE.  "
                                        "See the\n   GNU General Public "
                                        "License for more details.\n",
                                        1, 0x1f9, pFVar12);
                                    fwrite(
                                        "\n   You should have received a copy "
                                        "of the GNU General Public License\n   "
                                        "along with the LZO library; see the "
                                        "file COPYING.\n   If not, write to "
                                        "the Free Software Foundation, Inc.,\n "
                                        "  51 Franklin Street, Fifth Floor, "
                                        "Boston, MA 02110-1301, USA.\n\n   "
                                        "Markus F.X.J. Oberhumer\n   "
                                        "<markus@oberhumer.com>\n   "
                                        "http://www.oberhumer.com/opensource/"
                                        "lzo/\n\n",
                                        1, 0x156, pFVar12);
                                    fflush(pFVar12);
                                    /* WARNING: Subroutine does not return */
                                    exit(0);
                                }
                                if (iVar8 < 0x4d)
                                    goto LAB_00013530;
                                if (iVar8 == 0x4f) {
                                    opt_optimize_compressed_data = 1;
                                } else {
                                    if (iVar8 != 0x51)
                                        goto LAB_0001332c;
                                    opt_verbose = 0;
                                }
                                goto LAB_000125ec;
                            }
                            if (iVar8 == 0x56)
                                goto LAB_000133e8;
                            if (iVar8 < 0x57) {
                                if (iVar8 != 0x54)
                                    goto LAB_0001332c;
                                opt_totals = opt_totals + 1;
                                goto LAB_000125ec;
                            }
                            if (iVar8 == 0x62) {
                                DAT_0002a628 = 0;
                                if (local_22c != (byte *)0x0) {
                                    if (9 < *local_22c - 0x30)
                                        goto LAB_00012698;
                                    DAT_0002a628 = strtol((char *)local_22c,
                                                          (char **)0x0, 10);
                                    pbVar17 = opt_corpus_path;
                                    piVar18 = opt_corpus;
                                }
                                goto LAB_000125ec;
                            }
                            if (iVar8 != 99)
                                goto LAB_0001332c;
                        }
                        if ((local_22c == (byte *)0x0) ||
                            (9 < *local_22c - 0x30))
                            goto LAB_00012698;
                        opt_c_loops =
                            strtol((char *)local_22c, (char **)0x0, 10);
                        pbVar17 = opt_corpus_path;
                        piVar18 = opt_corpus;
                        goto LAB_000125ec;
                    }
                    opt_use_asm_fast_decompressor = 1;
                    goto LAB_000125ec;
                }
                if (iVar8 == 0x202) {
                LAB_00013460:
                    if ((local_22c == (byte *)0x0) || (*local_22c == 0))
                        goto LAB_00012698;
                    opt_corpus_path = local_22c;
                    pbVar17 = opt_corpus_path;
                    piVar18 = (int *)&DAT_00017ea8;
                } else if (iVar8 < 0x203) {
                    if (iVar8 == 0x73)
                        goto LAB_00013460;
                    if (iVar8 < 0x74) {
                        if (iVar8 == 0x6d) {
                            FUN_00014898(local_22c);
                            pbVar17 = opt_corpus_path;
                            piVar18 = opt_corpus;
                        } else {
                            if (iVar8 < 0x6e) {
                                if (iVar8 == 0x68) {
                                LAB_0001351c:
                                    do {
                                        iVar8 = FUN_000143d8(DAT_0002a1d4, 0);
                                    LAB_00013530:
                                    } while (iVar8 == 0x48);
                                }
                                goto LAB_0001332c;
                            }
                            if (iVar8 == 0x6e) {
                                if ((local_22c == (byte *)0x0) ||
                                    (9 < *local_22c - 0x30))
                                    goto LAB_00012698;
                                opt_c_loops =
                                    strtol((char *)local_22c, (char **)0x0, 10);
                                opt_d_loops = opt_c_loops;
                                pbVar17 = opt_corpus_path;
                                piVar18 = opt_corpus;
                            } else {
                                if (iVar8 != 0x71)
                                    goto LAB_0001332c;
                                opt_verbose = opt_verbose + -1;
                            }
                        }
                    } else {
                        if (iVar8 == 0x156) {
                        LAB_000133e8:
                            /* WARNING: Subroutine does not return */
                            exit(0);
                        }
                        if (iVar8 < 0x157) {
                            if (iVar8 != 0x76)
                                goto LAB_0001332c;
                            opt_verbose = opt_verbose + 1;
                        } else {
                            if (iVar8 == 0x168)
                                goto LAB_0001351c;
                            if (iVar8 != 0x201)
                                goto LAB_0001332c;
                            opt_compute_adler32 = 1;
                        }
                    }
                } else if (iVar8 == 0x207) {
                    opt_execution_time = 1;
                } else if (iVar8 < 0x208) {
                    if (iVar8 == 0x204) {
                        opt_compute_crc32 = 1;
                    } else if (iVar8 < 0x204) {
                        opt_clear_wrkmem = 1;
                    } else if (iVar8 == 0x205) {
                        opt_dictionary_file = local_22c;
                        opt_dict = 1;
                    } else {
                        if (iVar8 != 0x206)
                            goto LAB_0001332c;
                        opt_dump_compressed_data = local_22c;
                    }
                } else if (iVar8 == 0x209) {
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_00012698;
                    opt_max_dict_len =
                        strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                } else if (iVar8 < 0x209) {
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_00012698;
                    DAT_0002a624 = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                } else if (iVar8 == 0x20a) {
                    if ((local_22c == (byte *)0x0) ||
                        (pbVar17 = local_22c, piVar18 = (int *)&DAT_00017f98,
                         *local_22c == 0))
                        goto LAB_00012698;
                } else {
                    if (iVar8 != 0x20b)
                        goto LAB_0001332c;
                    if ((local_22c == (byte *)0x0) || (9 < *local_22c - 0x30))
                        goto LAB_00012698;
                    opt_pclock = strtol((char *)local_22c, (char **)0x0, 10);
                    pbVar17 = opt_corpus_path;
                    piVar18 = opt_corpus;
                    if (0 < opt_pclock) {
                        DAT_0002a634 = opt_pclock;
                    }
                }
            } while (true);
        }
        FUN_000143d8(DAT_0002a1d4, 0xffffffff, 0);
    }
    puts("internal error - lzo_init() failed !!!");
    puts("(this usually indicates a compiler bug - try recompiling\nwithout "
         "optimizations, and enable `-DLZO_DEBUG\' for diagnostics)");
    /* WARNING: Subroutine does not return */
    exit(1);
}

/* WARNING: Control flow encountered bad instruction data */

void _start(undefined4 param_1, undefined4 *param_2)

{
    undefined4 *extraout_r1;
    undefined1 *unaff_r10;
    undefined4 unaff_r11;
    undefined1 in_NG;
    undefined1 in_ZR;
    char in_OV;
    undefined4 in_cr0;
    undefined4 in_cr15;

    if ((bool)in_ZR) {
        func_0x0004f72c();
        param_2 = extraout_r1;
    }
    if ((bool)in_ZR) {
        coprocessor_function(0, 0, 2, in_cr15, in_cr0, in_cr15);
    }
    if ((bool)in_NG) {
        *unaff_r10 = (char)unaff_r11;
    }
    if (in_NG != in_OV) {
        *param_2 = unaff_r11;
    }
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

/* WARNING: Removing unreachable block (ram,0x0001362c) */

void FUN_00013618(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00013650) */
/* WARNING: Removing unreachable block (ram,0x0001365a) */

void FUN_0001363c(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x0001367c) */
/* WARNING: Removing unreachable block (ram,0x00013686) */

void FUN_00013660(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002a1f8 == '\0') {
        FUN_0001363c();
        DAT_0002a1f8 = '\x01';
    }
    return;
}

int FUN_000136a8(int param_1, int param_2, int param_3, int param_4)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;

    iVar1 = param_3;
    iVar3 = param_3;
    iVar4 = param_2;
    if (param_3 <= param_2 || param_4 <= param_3) {
        return 0;
    }
    do {
        while (true) {
            uVar2 = *(undefined4 *)(param_1 + iVar4 * 4);
            *(undefined4 *)(param_1 + iVar4 * 4) =
                *(undefined4 *)(param_1 + iVar3 * 4);
            iVar4 = iVar4 + 1;
            *(undefined4 *)(param_1 + iVar3 * 4) = uVar2;
            iVar3 = iVar3 + 1;
            if (iVar1 == iVar4)
                break;
            if (param_4 == iVar3) {
                iVar3 = iVar1;
            }
        }
        iVar1 = iVar3;
    } while (param_4 != iVar3);
    return param_3 - param_2;
}

undefined4 FUN_0001371c(int param_1, undefined4 param_2, undefined4 param_3)

{
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(param_1, param_3);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return param_2;
}

undefined4 FUN_00013770(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timeval local_18;

    iVar1 = gettimeofday(&local_18, (__timezone_ptr_t)0x0);
    if (iVar1 == 0) {
        *param_2 = local_18.tv_sec;
        param_2[1] = local_18.tv_sec >> 0x1f;
        param_2[2] = local_18.tv_usec * 1000;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_000137bc(undefined4 param_1, undefined8 *param_2)

{
    clock_t cVar1;
    undefined4 uVar2;
    undefined4 extraout_r2;
    double dVar3;
    undefined8 uVar4;
    undefined8 uVar5;

    cVar1 = clock();
    dVar3 = ((double)(longlong)cVar1 / 1000000.0) * 1000000000.0;
    uVar4 = FUN_00016f40(SUB84(dVar3, 0), (int)((ulonglong)dVar3 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar5 = FUN_00016f00((int)uVar4, uVar2, 1000000000, 0);
    *param_2 = uVar5;
    FUN_00016f00((int)uVar4, uVar2, 1000000000, 0);
    *(undefined4 *)(param_2 + 1) = extraout_r2;
    return 0;
}

undefined4 FUN_00013838(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timespec local_10;

    iVar1 = clock_gettime(2, &local_10);
    if (iVar1 == 0) {
        param_2[2] = local_10.tv_nsec;
        *param_2 = local_10.tv_sec;
        param_2[1] = local_10.tv_sec >> 0x1f;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_0001387c(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    timespec local_10;

    iVar1 = clock_gettime(3, &local_10);
    if (iVar1 == 0) {
        param_2[2] = local_10.tv_nsec;
        *param_2 = local_10.tv_sec;
        param_2[1] = local_10.tv_sec >> 0x1f;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_000138c0(undefined4 param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    rusage local_58;

    iVar1 = getrusage(RUSAGE_SELF, &local_58);
    if (iVar1 == 0) {
        *param_2 = local_58.ru_utime.tv_sec;
        param_2[1] = local_58.ru_utime.tv_sec >> 0x1f;
        param_2[2] = local_58.ru_utime.tv_usec * 1000;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_0001390c(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    lzo_memset(param_3, 0, param_2);
    *param_4 = param_2;
    return 0;
}

void FUN_00013934(int param_1, char *param_2, undefined4 *param_3)

{
    fprintf(stderr, "%s: ", *(undefined4 *)(param_1 + 4));
    if (param_3 != (undefined4 *)0x0) {
        vfprintf(stderr, param_2, (__gnuc_va_list)*param_3);
        fputc(10, stderr);
        return;
    }
    fwrite("UNKNOWN GETOPT ERROR", 1, 0x14, stderr);
    fputc(10, stderr);
    return;
}

undefined4 FUN_000139ac(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = lzo_crc32(0, 0);
    lzo_crc32(uVar1, param_3, param_2);
    *param_4 = param_2;
    return 0;
}

undefined4 FUN_000139e4(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = lzo_adler32(0, 0);
    lzo_adler32(uVar1, param_3, param_2);
    *param_4 = param_2;
    return 0;
}

undefined4 FUN_00013a1c(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 *param_4)

{
    lzo_memcpy(param_3, param_1, param_2);
    *param_4 = param_2;
    return 0;
}

void FUN_00013e7c(int *param_1, int param_2, int param_3, int param_4)

{
    void *pvVar1;
    int iVar2;
    size_t __size;

    __size = param_2 + param_4 + param_3;
    param_1[5] = __size;
    *param_1 = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    if (__size == 0) {
        __size = 1;
        param_1[5] = 1;
        pvVar1 = malloc(1);
        param_1[4] = (int)pvVar1;
        if (pvVar1 == (void *)0x0) {
        LAB_00013f2c:
            fprintf(stderr, "%s: out of memory (wanted %lu bytes)\n",
                    DAT_0002a1d4, __size);
            /* WARNING: Subroutine does not return */
            exit(3);
        }
    } else {
        pvVar1 = malloc(__size);
        param_1[4] = (int)pvVar1;
        if (pvVar1 == (void *)0x0)
            goto LAB_00013f2c;
        if (7 < __size) {
            iVar2 = __lzo_align_gap(pvVar1, 8);
            if (iVar2 != 0) {
                fprintf(stderr,
                        "%s: C library problem: malloc() returned misaligned "
                        "pointer!\n",
                        DAT_0002a1d4);
                /* WARNING: Subroutine does not return */
                exit(3);
            }
            pvVar1 = (void *)param_1[4];
        }
    }
    *param_1 = (int)pvVar1 + param_3;
    param_1[6] = param_2;
    param_1[1] = param_2;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
}

void FUN_00013f88(int *param_1, uint param_2, char param_3)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    char *pcVar4;

    if ((uint)param_1[1] < param_2) {
        /* WARNING: Subroutine does not return */
        __assert_fail(
            "len <= mb->len",
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/"
            "rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
            0x267, "memchecker_init");
    }
    pcVar2 = (char *)*param_1;
    pcVar4 = pcVar2 + -0x10;
    do {
        pcVar1 = (char *)param_1[4];
        if (pcVar2 <= pcVar1)
            goto LAB_00013fc4;
        pcVar2 = pcVar2 + -1;
        *pcVar2 = param_3;
        param_3 = param_3 + '\x01';
    } while (pcVar4 != pcVar2);
    pcVar1 = (char *)param_1[4];
LAB_00013fc4:
    iVar3 = *param_1;
    pcVar2 = (char *)(iVar3 + param_2);
    while (true) {
        if (pcVar1 + param_1[5] <= pcVar2) {
            return;
        }
        *pcVar2 = param_3;
        param_3 = param_3 + '\x01';
        if ((char *)(iVar3 + param_2) + 0x10 == pcVar2 + 1)
            break;
        pcVar1 = (char *)param_1[4];
        pcVar2 = pcVar2 + 1;
    }
    return;
}

undefined4 FUN_00014024(undefined4 *param_1, uint param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    byte *pbVar3;
    byte *pbVar4;

    if ((uint)param_1[1] < param_2) {
        /* WARNING: Subroutine does not return */
        __assert_fail(
            "len <= mb->len",
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/"
            "rootfs/buildroot/tmp/debug/build/lzo-2.10/lzotest/lzotest.c",
            0x281, "memchecker_check");
    }
    pbVar4 = (byte *)*param_1;
    pbVar3 = pbVar4;
    do {
        if (pbVar3 <= (byte *)param_1[4])
            break;
        pbVar3 = pbVar3 + -1;
        uVar2 = param_3 + 1 & 0xff;
        if (*pbVar3 != param_3) {
            return 0xffffffff;
        }
        param_3 = uVar2;
    } while (pbVar3 != pbVar4 + -0x10);
    pbVar3 = pbVar4 + param_2;
    uVar2 = param_3;
    while (true) {
        if ((byte *)param_1[4] + param_1[5] <= pbVar3) {
            return 0;
        }
        uVar1 = uVar2 + 1 & 0xff;
        if (*pbVar3 != uVar2)
            break;
        pbVar3 = pbVar3 + 1;
        uVar2 = uVar1;
        if ((param_3 + 0x10 & 0xff) == uVar1) {
            return 0;
        }
    }
    return 0xffffffff;
}

bool FUN_000140e8(char *param_1, char *param_2)

{
    size_t __n;
    int iVar1;

    __n = strlen(param_2);
    iVar1 = strncmp(param_1, param_2, __n);
    if (iVar1 == 0) {
        return param_1[__n] != '\0' && param_1[__n] != ',';
    }
    return true;
}

void FUN_00014140(int param_1)

{
    int iVar1;
    int *piVar2;

    if (param_1 < 1) {
        return;
    }
    iVar1 = 0x15;
    piVar2 = (int *)&UNK_00017108;
    while (param_1 != iVar1) {
        if ((piVar2 == (int *)&DAT_00017df0) || (piVar2[0xe] == 0)) {
            fprintf(stdout, "%s: invalid method %d\n", DAT_0002a1d4);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        iVar1 = piVar2[0xf];
        piVar2 = piVar2 + 0xe;
    }
    if (0 < DAT_0002a21c) {
        if (param_1 == DAT_0002a220) {
            return;
        }
        piVar2 = &DAT_0002a220;
        iVar1 = 0;
        while (iVar1 = iVar1 + 1, iVar1 != DAT_0002a21c) {
            piVar2 = piVar2 + 1;
            if (*piVar2 == param_1) {
                return;
            }
        }
        if (0xff < iVar1) {
            fprintf(stderr, "%s: too many methods\n", DAT_0002a1d4);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    iVar1 = DAT_0002a21c + 1;
    (&DAT_0002a220)[DAT_0002a21c] = param_1;
    DAT_0002a21c = iVar1;
    (&DAT_0002a220)[iVar1] = 0;
    return;
}

void FUN_00014248(int param_1, int param_2)

{
    int iVar1;
    int *piVar2;

    if (param_2 < param_1) {
        return;
    }
    do {
        iVar1 = 0x15;
        piVar2 = (int *)&UNK_00017108;
        while (param_1 != iVar1) {
            if ((piVar2 == (int *)&DAT_00017df0) || (piVar2[0xe] == 0))
                goto LAB_0001428c;
            iVar1 = piVar2[0xf];
            piVar2 = piVar2 + 0xe;
        }
        FUN_00014140(param_1);
    LAB_0001428c:
        param_1 = param_1 + 1;
        if (param_1 == param_2 + 1) {
            return;
        }
    } while (true);
}

undefined4 FUN_000142b0(char *param_1)

{
    undefined4 uVar1;
    double in_d0;
    int iVar2;

    if (in_d0 <= 0.0) {
        builtin_strncpy(param_1, "0.0", 4);
        return 0;
    }
    uVar1 = SUB84(in_d0, 0);
    if (in_d0 <= 99.9375) {
        sprintf(param_1, "%4.1f");
        return uVar1;
    }
    iVar2 = (int)(longlong)(in_d0 + 0.5);
    if (iVar2 < 100) {
        builtin_strncpy(param_1, "???", 4);
        return uVar1;
    }
    if (iVar2 < 9999) {
        sprintf(param_1, "%ld");
        return uVar1;
    }
    builtin_strncpy(param_1, "9999", 5);
    return uVar1;
}

undefined4 FUN_00014378(undefined4 *param_1, undefined4 *param_2)

{
    double dVar1;
    uint uVar2;
    double dVar3;

    dVar3 = (double)FUN_00016ea4(*param_2, param_2[1]);
    uVar2 = param_2[2];
    dVar1 = (double)FUN_00016ea4(*param_1, param_1[1]);
    return SUB84((dVar3 + (double)uVar2 / 1000000000.0) -
                     (dVar1 + (double)(uint)param_1[2] / 1000000000.0),
                 0);
}

void FUN_000143d8(undefined4 param_1, int param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    char *pcVar2;
    int iVar3;
    int *piVar4;
    undefined4 local_48;
    undefined4 uStack_44;
    undefined4 local_40;
    char acStack_38[20];

    __stream = stdout;
    fflush(stdout);
    fflush(stderr);
    fprintf(__stream, "Usage: %s [option..] file...\n", param_1);
    fputc(10, __stream);
    fwrite("Options:\n", 1, 9, __stream);
    fwrite("  -m#     compression method\n", 1, 0x1d, __stream);
    fprintf(__stream, "  -b#     set input block size (default %lu, max %lu)\n",
            DAT_0002a628, DAT_0002a624);
    fwrite("  -n#     number of compression/decompression runs\n", 1, 0x33,
           __stream);
    fwrite("  -c#     number of compression runs\n", 1, 0x25, __stream);
    fwrite("  -d#     number of decompression runs\n", 1, 0x27, __stream);
    fwrite("  -S      use safe decompressor (if available)\n", 1, 0x2f,
           __stream);
    fwrite("  -A      use assembler decompressor (if available)\n", 1, 0x34,
           __stream);
    fwrite("  -F      use fast assembler decompressor (if available)\n", 1,
           0x39, __stream);
    fwrite("  -O      optimize compressed data (if available)\n", 1, 0x32,
           __stream);
    fwrite("  -s DIR  process Calgary Corpus test suite in directory `DIR\'\n",
           1, 0x3f, __stream);
    fwrite("  -@      read list of files to compress from stdin\n", 1, 0x34,
           __stream);
    fwrite("  -q      be quiet\n", 1, 0x13, __stream);
    fwrite("  -Q      be very quiet\n", 1, 0x18, __stream);
    fwrite("  -v      be verbose\n", 1, 0x15, __stream);
    fwrite("  -L      display software license\n", 1, 0x23, __stream);
    if (param_3 == 0) {
        fputc(10, __stream);
        fprintf(__stream, "Type \'%s -m\' to list all available methods.\n",
                param_1);
    } else {
        if ((DAT_0002a640 == (code *)0x0) ||
            (iVar1 = (*DAT_0002a640)(&DAT_0002a630, &local_48), iVar1 != 0)) {
            DAT_0002a638 = 1;
            local_48 = 0;
            uStack_44 = 0;
            local_40 = 0;
        }
        if (DAT_0002a630 == 0) {
            DAT_0002a634 = 0xffffffff;
        }
        iVar1 = 0;
        fprintf(__stream,
                "\nAll timings are recorded using pclock mode %d %s.\n",
                DAT_0002a634, DAT_0002a63c);
        fwrite("\n\n", 1, 2, __stream);
        fwrite("The following compression methods are available:\n", 1, 0x31,
               __stream);
        fputc(10, __stream);
        fwrite("  usage   name           memory          available extras\n", 1,
               0x3a, __stream);
        fwrite("  -----   ----           ------          ----------------\n", 1,
               0x3a, __stream);
        do {
            iVar3 = 0x15;
            piVar4 = (int *)&UNK_00017108;
            while (iVar1 != iVar3) {
                if ((piVar4 == (int *)&DAT_00017df0) || (piVar4[0xe] == 0))
                    goto joined_r0x000146c4;
                iVar3 = piVar4[0xf];
                piVar4 = piVar4 + 0xe;
            }
            iVar3 = piVar4[2];
            sprintf(acStack_38, "-m%d", iVar1);
            fprintf(__stream, "  %-6s  %-13s", acStack_38, *piVar4);
            fprintf(__stream, "%9lu", iVar3);
            if (piVar4[7] == 0) {
                pcVar2 = "          ";
            } else {
                fprintf(__stream, "%s%s", "          ", "safe");
                pcVar2 = ", ";
            }
            if (piVar4[8] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "asm");
                pcVar2 = ", ";
            }
            if (piVar4[9] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "asm+safe");
                pcVar2 = ", ";
            }
            if (piVar4[10] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "fastasm");
                pcVar2 = ", ";
            }
            if (piVar4[0xb] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "fastasm+safe");
                pcVar2 = ", ";
            }
            if (piVar4[5] != 0) {
                fprintf(__stream, "%s%s", pcVar2, "optimize");
            }
            fputc(10, __stream);
        joined_r0x000146c4:
            iVar1 = iVar1 + 1;
        } while (iVar1 != 5000);
    }
    fflush(__stream);
    /* WARNING: Subroutine does not return */
    exit((uint)(param_2 == -1));
}

void FUN_00014898(byte *param_1)

{
    byte bVar1;
    int iVar2;
    byte *pbVar3;
    uint uVar4;
    char *__s2;
    int *piVar5;
    undefined4 *puVar6;
    size_t __n;
    undefined4 *unaff_r8;
    char *unaff_r9;
    undefined *unaff_r10;

    if (param_1 == (byte *)0x0)
        goto LAB_00014aa4;
    if (*param_1 == 0)
        goto LAB_00014aa4;
    unaff_r8 = (undefined4 *)&DAT_00017df0;
    unaff_r9 = "LZO1-1";
    unaff_r10 = &DAT_000187b8;
    do {
        puVar6 = (undefined4 *)&UNK_00017108;
        __n = 6;
        __s2 = unaff_r9;
        while (true) {
            iVar2 = strncasecmp((char *)param_1, __s2, __n);
            if ((iVar2 == 0) && (param_1[__n] == 0x2c || param_1[__n] == 0)) {
                FUN_00014140(puVar6[1]);
                goto LAB_00014a5c;
            }
            if (unaff_r8 == puVar6)
                break;
            puVar6 = puVar6 + 0xe;
            __s2 = (char *)*puVar6;
            if (__s2 == (char *)0x0)
                break;
            __n = strlen(__s2);
        }
        iVar2 = FUN_000140e8(param_1, unaff_r10);
        if (iVar2 == 0)
            goto LAB_00014abc;
        iVar2 = FUN_000140e8(param_1, "avail");
        if (iVar2 == 0)
            goto LAB_00014abc;
        iVar2 = FUN_000140e8(param_1, &DAT_00018788);
        if (iVar2 == 0) {
            FUN_00014248(1, 4999);
            FUN_00014248(0x25f9, 0x2601);
            FUN_00014248(0x2635, 0x263d);
        } else {
            iVar2 = FUN_000140e8(param_1, &DAT_0001878c);
            if (iVar2 == 0) {
                FUN_00014248(1, 999);
            } else {
                iVar2 = FUN_000140e8(param_1, "bench");
                if (iVar2 == 0) {
                    piVar5 = (int *)&UNK_00017e28;
                    iVar2 = 1;
                    do {
                        FUN_00014140(iVar2);
                        piVar5 = piVar5 + 1;
                        iVar2 = *piVar5;
                    } while (iVar2 != 0);
                } else {
                    iVar2 = FUN_000140e8(param_1, &DAT_00018798);
                    if (iVar2 == 0) {
                        piVar5 = (int *)&UNK_00017e44;
                        iVar2 = 0x15;
                        do {
                            FUN_00014140(iVar2);
                            piVar5 = piVar5 + 1;
                            iVar2 = *piVar5;
                        } while (iVar2 != 0);
                    } else {
                        iVar2 = FUN_000140e8(param_1, &DAT_0001879c);
                        if (iVar2 == 0) {
                            piVar5 = (int *)&UNK_00017e64;
                            iVar2 = 0x399;
                            do {
                                FUN_00014140(iVar2);
                                piVar5 = piVar5 + 1;
                                iVar2 = *piVar5;
                            } while (iVar2 != 0);
                        } else {
                            iVar2 = FUN_000140e8(param_1, &DAT_000187a0);
                            if (iVar2 == 0) {
                                piVar5 = (int *)&UNK_00017e78;
                                iVar2 = 0x386;
                                do {
                                    FUN_00014140(iVar2);
                                    piVar5 = piVar5 + 1;
                                    iVar2 = *piVar5;
                                } while (iVar2 != 0);
                            } else {
                                iVar2 = FUN_000140e8(param_1, "1x999");
                                if (iVar2 == 0) {
                                    FUN_00014248(0x25f9, 0x2601);
                                } else {
                                    iVar2 = FUN_000140e8(param_1, "1y999");
                                    if (iVar2 == 0) {
                                        FUN_00014248(0x265d, 0x2665);
                                    } else {
                                        uVar4 = (uint)*param_1;
                                        pbVar3 = param_1;
                                        do {
                                            if (9 < uVar4 - 0x30) {
                                                printf("%s: invalid method "
                                                       "\'%s\'\n\n",
                                                       DAT_0002a1d4, param_1);
                                                /* WARNING: Subroutine does not
                                                 * return */
                                                exit(1);
                                            }
                                            pbVar3 = pbVar3 + 1;
                                            uVar4 = (uint)*pbVar3;
                                        } while (uVar4 != 0x2c && uVar4 != 0);
                                        strtol((char *)param_1, (char **)0x0,
                                               10);
                                        FUN_00014140();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    LAB_00014a5c:
        while (true) {
            bVar1 = *param_1;
            if (bVar1 != 0x2c && bVar1 != 0) {
                do {
                    param_1 = param_1 + 1;
                    bVar1 = *param_1;
                } while (bVar1 != 0 && bVar1 != 0x2c);
            }
            while (bVar1 == 0x2c) {
                param_1 = param_1 + 1;
                bVar1 = *param_1;
            }
            if (bVar1 == 0) {
                return;
            }
            if (*param_1 != 0)
                break;
        LAB_00014aa4:
            FUN_000143d8(DAT_0002a1d4, 0xffffffff, 1);
        LAB_00014abc:
            FUN_00014248(1, 4999);
        }
    } while (true);
}

undefined4 FUN_00014bc4(int *param_1, code *param_2, undefined4 param_3,
                        char *param_4, int param_5, int param_6)

{
    char cVar1;
    void *pvVar2;
    FILE *__stream;
    int iVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    size_t sVar7;
    int iVar8;
    uint uVar9;
    char *pcVar10;
    uint uVar11;
    uint uVar12;
    char *pcVar13;
    bool bVar14;
    bool bVar15;
    bool bVar16;
    undefined4 uVar17;
    undefined4 extraout_s1;
    undefined4 extraout_s1_00;
    undefined4 extraout_s1_01;
    double extraout_d5;
    double dVar18;
    double extraout_d6;
    double dVar19;
    double dVar20;
    double dVar21;
    double dVar22;
    undefined8 in_stack_ffffff18;
    undefined8 uVar23;
    char *local_c0;
    int local_ac;
    uint local_a8;
    FILE *local_a4;
    int local_a0;
    size_t local_90[2];
    undefined4 local_88;
    undefined4 uStack_84;
    undefined4 local_80;
    uint local_78[4];
    undefined4 local_68;
    undefined4 uStack_64;
    undefined4 local_60;
    undefined4 local_58;
    undefined4 uStack_54;
    undefined4 local_50;

    if (opt_dump_compressed_data == (FILE *)0x0) {
        local_a4 = opt_dump_compressed_data;
    } else {
        local_a4 = fopen64((char *)opt_dump_compressed_data, "wb");
    }
    if ((DAT_0002a640 == (code *)0x0) ||
        (iVar3 = (*DAT_0002a640)(&DAT_0002a630, &local_88), iVar3 != 0)) {
        DAT_0002a638 = 1;
        local_88 = 0;
        uStack_84 = 0;
        local_80 = 0;
    }
    dVar20 = 0.0;
    local_a0 = 0;
    local_a8 = DAT_0002a658;
    local_ac = 0;
    local_c0 = DAT_0002a654;
    local_78[0] = 0;
    local_90[0] = 0;
    dVar21 = dVar20;
    dVar22 = dVar20;
    do {
        __stream = local_a4;
        uVar5 = DAT_0002a658;
        uVar4 = clock();
        uVar4 = (uVar4 ^ uVar5) & 0xff;
        iVar3 = param_1[1];
        local_ac = local_ac + 1;
        uVar5 = local_a8;
        if (DAT_0002a628 <= local_a8) {
            uVar5 = DAT_0002a628;
        }
        DAT_0002a674 = uVar5;
        if (iVar3 != 999 && iVar3 < 4999) {
            if (iVar3 == 0x3b8 || iVar3 == 0x3ae) {
                DAT_0002a674 = uVar5 + 0x100 + (uVar5 >> 3);
            } else if (iVar3 - 1U < 0x3e5) {
                DAT_0002a674 = uVar5 + 0x43 + (uVar5 >> 4);
            } else {
                DAT_0002a674 = uVar5 + 0x100 + (uVar5 >> 3);
            }
        }
        DAT_0002a694 = uVar5;
        if (opt_use_asm_fast_decompressor != 0) {
            DAT_0002a694 = uVar5 + 3;
        }
        if (DAT_0002a688 < DAT_0002a674) {
            /* WARNING: Subroutine does not return */
            __assert_fail("block_c.len <= block_c.saved_len",
                          "/workspace/jenkins/jenkins/workspace/"
                          "Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                          "debug/build/lzo-2.10/lzotest/lzotest.c",
                          0x414, "process_file");
        }
        if (DAT_0002a6a8 < DAT_0002a694) {
            /* WARNING: Subroutine does not return */
            __assert_fail("block_d.len <= block_d.saved_len",
                          "/workspace/jenkins/jenkins/workspace/"
                          "Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                          "debug/build/lzo-2.10/lzotest/lzotest.c",
                          0x415, "process_file");
        }
        FUN_00013f88(&DAT_0002a670, DAT_0002a674, uVar4);
        FUN_00013f88(&DAT_0002a690, DAT_0002a694, uVar4);
        local_90[0] = 0;
        if ((DAT_0002a640 == (code *)0x0) ||
            (iVar3 = (*DAT_0002a640)(&DAT_0002a630, &local_68), iVar3 != 0)) {
            DAT_0002a638 = 1;
            local_68 = 0;
            uStack_64 = 0;
            local_60 = 0;
        }
        if (param_5 < 1) {
            uVar12 = 0;
            uVar9 = uVar12;
        } else {
            local_90[0] = DAT_0002a674;
            if ((param_1[4] == 0) ||
                (uVar9 = param_1[2], DAT_0002a6b0 < uVar9)) {
                uVar12 = 0;
                uVar9 = 0xffffff9c;
            } else {
                iVar3 = 0;
                uVar12 = 0;
                do {
                    pvVar2 = DAT_0002a670;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffff18 >> 0x20);
                    local_90[0] = DAT_0002a674;
                    FUN_00013f88(&DAT_0002a6ac, uVar9, uVar5 & 0xff);
                    if (opt_clear_wrkmem == 0) {
                        if (opt_dict == 0)
                            goto LAB_00014df4;
                    LAB_0001527c:
                        if ((code *)param_1[0xc] == (code *)0x0)
                            goto LAB_00014df4;
                        in_stack_ffffff18 =
                            CONCAT44(DAT_0002a200, DAT_0002a6ac);
                        uVar9 = (*(code *)param_1[0xc])(
                            local_c0, uVar5, pvVar2, local_90, DAT_0002a6ac,
                            DAT_0002a200, DAT_0002a204);
                    } else {
                        lzo_memset(DAT_0002a6ac, 0, param_1[2]);
                        if (opt_dict != 0)
                            goto LAB_0001527c;
                    LAB_00014df4:
                        in_stack_ffffff18 = CONCAT44(uVar17, DAT_0002a6ac);
                        uVar9 = (*(code *)param_1[4])(local_c0, uVar5, pvVar2,
                                                      local_90, DAT_0002a6ac);
                    }
                    iVar6 =
                        FUN_00014024(&DAT_0002a6ac, param_1[2], uVar5 & 0xff);
                    if (iVar6 != 0) {
                        puts("WARNING: wrkmem overwrite error (compress) !!!");
                    }
                    if (uVar9 != 0)
                        goto LAB_00014e34;
                    if (opt_compute_adler32 != 0) {
                        uVar17 = lzo_adler32(0, 0, 0);
                        DAT_0002a6d4 = lzo_adler32(uVar17, local_c0, uVar5);
                    }
                    if (opt_compute_crc32 != 0) {
                        uVar17 = lzo_crc32(0, 0);
                        DAT_0002a6dc = lzo_crc32(uVar17, local_c0, uVar5);
                    }
                    if (uVar12 < local_90[0]) {
                        uVar12 = local_90[0];
                    }
                    uVar11 = DAT_0002a674;
                    sVar7 = local_90[0];
                    if (DAT_0002a674 < local_90[0])
                        goto LAB_00015388;
                    iVar3 = iVar3 + 1;
                    if (iVar3 == param_5)
                        goto LAB_00014e34;
                } while ((param_1[4] != 0) &&
                         (uVar9 = param_1[2], uVar9 <= DAT_0002a6b0));
                uVar9 = 0xffffff9c;
                local_90[0] = DAT_0002a674;
            }
        }
    LAB_00014e34:
        if ((DAT_0002a640 == (code *)0x0) ||
            (iVar3 = (*DAT_0002a640)(&DAT_0002a630, &local_58), iVar3 != 0)) {
            DAT_0002a638 = 1;
            local_58 = 0;
            uStack_54 = 0;
            local_50 = 0;
        }
        if (DAT_0002a630 == 0) {
            DAT_0002a634 = 0xffffffff;
            dVar19 = dVar20;
        } else {
            uVar17 = FUN_00014378(&local_68, &local_58);
            dVar19 = (double)CONCAT44(extraout_s1, uVar17);
        }
        sVar7 = local_90[0];
        uVar11 = DAT_0002a674;
        dVar22 = dVar22 + dVar19;
        if (uVar9 != 0) {
            printf("  compression failed in block %lu (%d) (%lu %lu)\n",
                   local_ac, uVar9, local_90[0], uVar5);
            return 5;
        }
        iVar3 = FUN_00014024(&DAT_0002a670, DAT_0002a674, uVar4);
        if (iVar3 != 0) {
        LAB_00015388:
            printf("  compression overwrite error in block %lu (%lu %lu %lu "
                   "%lu)\n",
                   local_ac, sVar7, local_78[0], uVar5, uVar11);
            return 5;
        }
        if ((sVar7 < uVar5) && (opt_optimize_compressed_data != 0)) {
            local_78[0] = uVar5;
            if (((code *)param_1[5] != (code *)0x0) &&
                ((uint)param_1[3] <= DAT_0002a6b0)) {
                in_stack_ffffff18 = CONCAT44(
                    (int)((ulonglong)in_stack_ffffff18 >> 0x20), DAT_0002a6ac);
                iVar3 = (*(code *)param_1[5])(DAT_0002a670, sVar7, DAT_0002a690,
                                              local_78);
                if ((iVar3 != 0) ||
                    (uVar11 = DAT_0002a674, uVar5 != local_78[0])) {
                    printf("  optimization failed in block %lu (%d) (%lu %lu "
                           "%lu)\n",
                           local_ac, iVar3, local_90[0], local_78[0], uVar5);
                    return 5;
                }
            }
            iVar3 = FUN_00014024(&DAT_0002a670, uVar11, uVar4);
            if ((iVar3 != 0) ||
                (iVar3 = FUN_00014024(&DAT_0002a690, DAT_0002a694, uVar4),
                 iVar3 != 0)) {
                printf("  optimize overwrite error in block %lu (%lu %lu %lu "
                       "%lu)\n",
                       local_ac, local_90[0], uVar5, uVar5, uVar11);
                return 5;
            }
        }
        if ((local_a4 != (FILE *)0x0) &&
            ((sVar7 = fwrite(DAT_0002a670, 1, local_90[0], local_a4),
              sVar7 != local_90[0] ||
                  (iVar3 = fflush(local_a4), iVar3 != 0)))) {
            local_a4 = (FILE *)0x0;
            fclose(__stream);
        }
        if ((DAT_0002a640 == (code *)0x0) ||
            (iVar3 = (*DAT_0002a640)(&DAT_0002a630, &local_68), iVar3 != 0)) {
            DAT_0002a638 = 1;
            local_68 = 0;
            uStack_64 = 0;
            local_60 = 0;
        }
        if (param_6 < 1) {
        LAB_00015380:
            iVar6 = 0;
        } else {
            local_78[0] = uVar5;
            if ((param_2 != (code *)0x0) &&
                (uVar9 = param_1[3], uVar9 <= DAT_0002a6b0)) {
                iVar3 = 0;
                do {
                    sVar7 = local_90[0];
                    pcVar10 = DAT_0002a690;
                    pvVar2 = DAT_0002a670;
                    uVar17 = (undefined4)((ulonglong)in_stack_ffffff18 >> 0x20);
                    uVar11 = local_90[0] & 0xff;
                    FUN_00013f88(&DAT_0002a6ac, uVar9, uVar11);
                    if (opt_clear_wrkmem == 0) {
                        if (opt_dict == 0)
                            goto LAB_00015054;
                    LAB_000152f0:
                        if ((code *)param_1[0xd] == (code *)0x0)
                            goto LAB_00015054;
                        in_stack_ffffff18 =
                            CONCAT44(DAT_0002a200, DAT_0002a6ac);
                        iVar6 = (*(code *)param_1[0xd])(
                            pvVar2, sVar7, pcVar10, local_78, DAT_0002a6ac,
                            DAT_0002a200, DAT_0002a204);
                    } else {
                        lzo_memset(DAT_0002a6ac, 0, param_1[3]);
                        if (opt_dict != 0)
                            goto LAB_000152f0;
                    LAB_00015054:
                        in_stack_ffffff18 = CONCAT44(uVar17, DAT_0002a6ac);
                        iVar6 = (*param_2)(pvVar2, sVar7, pcVar10, local_78);
                    }
                    iVar8 = FUN_00014024(&DAT_0002a6ac, param_1[3], uVar11);
                    if (iVar8 != 0) {
                        puts(
                            "WARNING: wrkmem overwrite error (decompress) !!!");
                    }
                    if (iVar6 != 0)
                        goto LAB_00015098;
                    if (opt_compute_adler32 != 0) {
                        DAT_0002a6e4 = lzo_adler32(1, pcVar10);
                    }
                    if (opt_compute_crc32 != 0) {
                        DAT_0002a6e8 = lzo_crc32(0, pcVar10);
                    }
                    if ((uVar5 != local_78[0]) ||
                        (iVar3 = iVar3 + 1, iVar3 == param_6))
                        goto LAB_00015380;
                    uVar9 = param_1[3];
                } while (uVar9 <= DAT_0002a6b0);
            }
            iVar6 = -100;
        }
    LAB_00015098:
        if ((DAT_0002a640 == (code *)0x0) ||
            (iVar3 = (*DAT_0002a640)(&DAT_0002a630, &local_58), iVar3 != 0)) {
            DAT_0002a638 = 1;
            local_58 = 0;
            uStack_54 = 0;
            local_50 = 0;
        }
        if (DAT_0002a630 == 0) {
            DAT_0002a634 = 0xffffffff;
            dVar19 = dVar20;
        } else {
            uVar17 = FUN_00014378(&local_68, &local_58);
            dVar19 = (double)CONCAT44(extraout_s1_00, uVar17);
        }
        uVar9 = local_78[0];
        dVar21 = dVar21 + dVar19;
        if (iVar6 != 0) {
            printf("  decompression failed in block %lu (%d) (%lu %lu %lu)\n",
                   local_ac, iVar6, local_90[0], local_78[0], uVar5);
            return 5;
        }
        if (uVar5 != local_78[0]) {
            printf("  decompression size error in block %lu (%lu %lu %lu)\n",
                   local_ac, local_90[0], local_78[0], uVar5);
            return 5;
        }
        if (0x1270 < param_1[1] - 5000U) {
            iVar3 = lzo_memcmp(local_c0, DAT_0002a690, uVar5);
            if (iVar3 != 0) {
                uVar4 = uVar5;
                if (uVar5 == 0)
                    goto LAB_000158b4;
                if (*DAT_0002a690 != *local_c0) {
                    uVar4 = 0;
                    goto LAB_000158b4;
                }
                uVar12 = 0;
                pcVar10 = DAT_0002a690;
                goto LAB_000158a4;
            }
            if (((opt_compute_adler32 != 0) &&
                 (DAT_0002a6d4 != DAT_0002a6e4)) ||
                ((opt_compute_crc32 != 0 && (DAT_0002a6dc != DAT_0002a6e8)))) {
                printf("  checksum error in block %lu (%lu %lu)\n", local_ac,
                       local_90[0], local_78[0]);
                printf("      adler32: 0x%08lx 0x%08lx\n", DAT_0002a6d4,
                       DAT_0002a6e4);
                printf("      crc32: 0x%08lx 0x%08lx\n", DAT_0002a6dc,
                       DAT_0002a6e8);
                return 5;
            }
        }
        uVar11 = DAT_0002a694;
        iVar3 = FUN_00014024(&DAT_0002a690, DAT_0002a694, uVar4);
        if (iVar3 != 0) {
            printf("  decompression overwrite error in block %lu (%lu %lu %lu "
                   "%lu)\n",
                   local_ac, local_90[0], local_78[0], uVar9, uVar11);
            return 5;
        }
        local_a8 = local_a8 - uVar5;
        local_c0 = local_c0 + uVar5;
        local_a0 = local_a0 + uVar12;
    } while (local_a8 != 0);
    if ((DAT_0002a640 == (code *)0x0) ||
        (iVar3 = (*DAT_0002a640)(&DAT_0002a630, local_78), iVar3 != 0)) {
        DAT_0002a638 = 1;
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
    }
    if (DAT_0002a630 == 0) {
        DAT_0002a634 = 0xffffffff;
    }
    if (local_a4 != (FILE *)0x0) {
        fclose(local_a4);
    }
    uVar5 = DAT_0002a658;
    opt_dump_compressed_data = (FILE *)0x0;
    uVar12 = DAT_0002a658 * param_5;
    uVar4 = DAT_0002a658 * param_6;
    uVar17 = FUN_000142b0(local_90);
    if (opt_pclock == 0) {
        dVar21 = 0.0;
        dVar22 = dVar21;
        dVar20 = dVar21;
        dVar19 = dVar21;
    } else {
        dVar18 = extraout_d5;
        dVar19 = extraout_d6;
        if (0.001 < dVar22) {
            dVar19 = 1000000.0;
            dVar18 = (double)uVar12 / dVar22;
        }
        dVar20 = 0.0;
        if (0.001 < dVar22) {
            dVar20 = dVar18 / dVar19;
        }
        if (dVar21 <= 0.001) {
            dVar19 = 0.0;
        } else {
            dVar19 = ((double)uVar4 / dVar21) / 1000000.0;
        }
    }
    DAT_0002a6f0 = DAT_0002a6f0 + local_a0;
    DAT_0002a700 = DAT_0002a700 + (double)CONCAT44(extraout_s1_01, uVar17);
    DAT_0002a6ec = DAT_0002a6ec + 1;
    DAT_0002a6f4 = DAT_0002a6f4 + uVar5;
    DAT_0002a6f8 = DAT_0002a6f8 + local_ac;
    if (0.0 < dVar20) {
        DAT_0002a718 = DAT_0002a718 + dVar20;
        DAT_0002a708 = DAT_0002a708 + 1;
        DAT_0002a710 = DAT_0002a710 + 1.0 / dVar20;
    }
    if (0.0 < dVar19) {
        DAT_0002a720 = DAT_0002a720 + 1;
        DAT_0002a730 = DAT_0002a730 + dVar19;
        DAT_0002a728 = DAT_0002a728 + 1.0 / dVar19;
    }
    if (opt_verbose < 2) {
        if (opt_verbose != 1)
            goto LAB_00015844;
    } else {
        printf("  compressed into %lu bytes,  %s%%  (%s%.3f bits/byte)\n",
               local_a0, local_90, "",
               (double)CONCAT44(extraout_s1_01, uVar17) * 0.08);
        printf("%-15s %5ld: ", "compress", param_5);
        printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", uVar12,
               SUB84(dVar22, 0), (int)((ulonglong)dVar22 >> 0x20), dVar20);
        printf("%-15s %5ld: ", "decompress", param_6);
        printf("%10lu bytes, %8.2f secs, %8.3f MB/sec\n", uVar4,
               SUB84(dVar21, 0), (int)((ulonglong)dVar21 >> 0x20), dVar19);
        putchar(10);
        if (opt_verbose < 1)
            goto LAB_00015844;
    }
    cVar1 = *param_4;
    pcVar10 = param_4;
    pcVar13 = param_4;
    while (cVar1 != '\0') {
        param_4 = param_4 + 1;
        bVar14 = cVar1 != '\\';
        bVar15 = cVar1 != '/';
        bVar16 = cVar1 != ':';
        if (!bVar16 || (!bVar14 || !bVar15)) {
            pcVar13 = param_4;
        }
        cVar1 = *param_4;
        if (bVar16 && (bVar14 && bVar15)) {
            pcVar10 = pcVar13;
        }
    }
    printf("%-13s| %-14s %8lu %4lu %9lu %4s %s%8.3f %8.3f |\n", param_3,
           pcVar10, uVar5, local_ac, local_a0, local_90, "", dVar20, dVar19);
    if (1 < opt_verbose) {
        putchar(10);
    }
LAB_00015844:
    if (*param_1 != DAT_0002a738) {
        DAT_0002a73c = DAT_0002a73c + 1;
        DAT_0002a738 = *param_1;
    }
    return 0;
    while (true) {
        pcVar10 = pcVar10 + 1;
        local_c0 = local_c0 + 1;
        uVar4 = uVar12;
        if (*pcVar10 != *local_c0)
            break;
    LAB_000158a4:
        uVar12 = uVar12 + 1;
        uVar4 = uVar5;
        if (uVar12 == uVar9)
            break;
    }
LAB_000158b4:
    uVar23 = CONCAT44((int)((ulonglong)in_stack_ffffff18 >> 0x20), local_78[0]);
    printf("  decompression data error in block %lu at offset %lu (%lu %lu)\n",
           local_ac, uVar4, local_90[0], local_78[0]);
    if (opt_compute_adler32 != 0) {
        printf("      checksum: 0x%08lx 0x%08lx\n", DAT_0002a6d4, DAT_0002a6e4,
               opt_compute_adler32, uVar23);
    }
    return 5;
}

undefined4 FUN_00015a5c(int param_1, char *param_2, int param_3, int param_4,
                        undefined4 *param_5, undefined4 *param_6)

{
    uint uVar1;
    FILE *__stream;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    undefined4 *puVar8;
    char *__src;
    char *pcVar9;
    int iVar10;
    char acStack_12c[264];

    iVar10 = 0x15;
    DAT_0002a6e4 = 0;
    if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
    }
    DAT_0002a6d4 = 0;
    DAT_0002a6e8 = 0;
    DAT_0002a6dc = 0;
    if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
    }
    pcVar9 = "LZO1-1";
    puVar8 = (undefined4 *)&UNK_00017108;
    while (iVar10 != param_1) {
        if (puVar8 == (undefined4 *)&DAT_00017df0) {
            return 7;
        }
        pcVar9 = (char *)puVar8[0xe];
        if (pcVar9 == (char *)0x0) {
            return 7;
        }
        iVar10 = puVar8[0xf];
        puVar8 = puVar8 + 0xe;
    }
    if (puVar8[4] == 0) {
        return 7;
    }
    if (opt_use_safe_decompressor == 0) {
    LAB_00015afc:
        if ((opt_use_asm_fast_decompressor == 0) ||
            (iVar10 = puVar8[10], iVar10 == 0)) {
            if ((opt_use_asm_decompressor == 0) ||
                (iVar10 = puVar8[8], iVar10 == 0)) {
                iVar10 = puVar8[6];
                if (iVar10 == 0) {
                    return 7;
                }
                __src = "";
            } else {
                __src = " [a]";
            }
        } else {
            __src = " [f]";
        }
    } else if ((opt_use_asm_fast_decompressor == 0) ||
               (iVar10 = puVar8[0xb], iVar10 == 0)) {
        if ((opt_use_asm_decompressor == 0) ||
            (iVar10 = puVar8[9], iVar10 == 0)) {
            iVar10 = puVar8[7];
            if (iVar10 == 0)
                goto LAB_00015afc;
            __src = " [s]";
        } else {
            __src = " [as]";
        }
    } else {
        __src = " [fs]";
    }
    if ((opt_dict != 0) && (puVar8[0xd] != 0)) {
        __src = "";
    }
    if (DAT_0002a6b0 < (uint)puVar8[3]) {
        return 7;
    }
    pcVar9 = stpcpy(acStack_12c, pcVar9);
    strcpy(pcVar9, __src);
    fflush(stdout);
    fflush(stderr);
    uVar1 = DAT_0002a624;
    if (DAT_0002a664 != (void *)0x0) {
        free(DAT_0002a664);
    }
    DAT_0002a654 = (void *)0x0;
    DAT_0002a664 = (void *)0x0;
    DAT_0002a658 = 0;
    DAT_0002a668 = 0;
    __stream = fopen64(param_2, "rb");
    if (__stream == (FILE *)0x0) {
        fflush(stdout);
        fflush(stderr);
        fprintf(stderr, "%s: ", param_2);
        fflush(stderr);
        pcVar9 = "fopen";
    LAB_00015da0:
        perror(pcVar9);
        fflush(stdout);
        fflush(stderr);
        return 2;
    }
    iVar2 = fseek(__stream, 0, 2);
    if (iVar2 == 0) {
        uVar3 = ftell(__stream);
        iVar2 = fseek(__stream, 0, 0);
        if (iVar2 == 0) {
            uVar7 = uVar3 >> 0x1f;
        } else {
            uVar7 = 1;
        }
        if (uVar7 == 0) {
            uVar7 = uVar1;
            if (uVar3 <= uVar1) {
                uVar7 = uVar3;
            }
            if (uVar3 != uVar7) {
                uVar7 = uVar1;
            }
            FUN_00013e7c(&DAT_0002a654, uVar7, 0);
            DAT_0002a658 = fread(DAT_0002a654, 1, DAT_0002a658, __stream);
            iVar2 = ferror(__stream);
            iVar4 = fclose(__stream);
            if (iVar2 == 0 && iVar4 == 0) {
                uVar5 = lzo_adler32(0, 0);
                uVar5 = lzo_adler32(uVar5, DAT_0002a654, DAT_0002a658);
                if (param_5 != (undefined4 *)0x0) {
                    *param_5 = uVar5;
                }
                uVar6 = lzo_crc32(0, 0);
                uVar6 = lzo_crc32(uVar6, DAT_0002a654, DAT_0002a658);
                if (param_6 != (undefined4 *)0x0) {
                    *param_6 = uVar6;
                }
                if (param_3 < 1) {
                    param_3 = 1;
                }
                if (param_4 < 1) {
                    param_4 = 1;
                }
                if (1 < opt_verbose) {
                    printf("File %s: %lu bytes   (0x%08lx, 0x%08lx)\n", param_2,
                           DAT_0002a658, uVar5, uVar6);
                    printf("  compressing %lu bytes (%ld/%ld/%ld loops, %lu "
                           "block-size)\n",
                           DAT_0002a658, 1, param_3, param_4, DAT_0002a628);
                    printf("  %s\n", acStack_12c);
                }
                uVar5 = FUN_00014bc4(puVar8, iVar10, acStack_12c, param_2,
                                     param_3, param_4);
                return uVar5;
            }
            if (DAT_0002a664 != (void *)0x0) {
                free(DAT_0002a664);
            }
            DAT_0002a654 = (void *)0x0;
            DAT_0002a664 = (void *)0x0;
            DAT_0002a658 = 0;
            DAT_0002a668 = 0;
            fflush(stdout);
            fflush(stderr);
            fprintf(stderr, "%s: ", param_2);
            fflush(stderr);
            pcVar9 = "fclose";
            goto LAB_00015da0;
        }
    }
    fflush(stdout);
    fflush(stderr);
    fprintf(stderr, "%s: ", param_2);
    fflush(stderr);
    perror("fseek");
    fflush(stdout);
    fflush(stderr);
    fclose(__stream);
    return 2;
}

void lzo_getopt_init(void *param_1, undefined4 param_2, undefined4 param_3,
                     undefined4 param_4)

{
    memset(param_1, 0, 0x38);
    *(undefined4 *)((int)param_1 + 0x14) = param_2;
    *(undefined4 *)((int)param_1 + 0x20) = param_3;
    *(undefined4 *)((int)param_1 + 0x24) = param_4;
    *(undefined4 *)((int)param_1 + 0x18) = 0xffffffff;
    return;
}

char *lzo_getopt(int param_1, char *param_2, int *param_3, int *param_4)

{
    char *pcVar1;
    int iVar2;
    char *pcVar3;
    uint uVar4;
    undefined4 uVar5;
    int iVar6;
    int iVar7;
    undefined4 uVar8;
    char *pcVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    char cVar13;
    int *piVar14;
    int iVar15;
    int iVar16;
    uint uVar17;
    char *__s1;
    undefined4 *puVar18;
    char *__n;
    bool bVar19;
    int *local_50;

    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar8 = uVar5;
    if (param_2 == (char *)0x0) {
        iVar15 = 0;
    } else {
        cVar13 = *param_2;
        if ((cVar13 - 0x2bU & 0xfd) == 0) {
            bVar19 = cVar13 == '-';
            cVar13 = param_2[1];
            if (bVar19) {
                iVar15 = 1;
                param_2 = param_2 + 1;
            } else {
                iVar15 = 2;
                param_2 = param_2 + 1;
            }
        } else {
            iVar15 = 0;
        }
        if (cVar13 == ':') {
            param_2 = param_2 + 1;
            uVar8 = 0x3a;
        }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x18) == -1) {
        *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
    if (param_4 != (int *)0x0) {
        *param_4 = -1;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
        return (char *)0xffffffff;
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    iVar16 = *(int *)(param_1 + 0x24);
    iVar10 = *(int *)(param_1 + 0x14);
    if (iVar6 != 0) {
        pcVar3 = *(char **)(iVar16 + iVar10 * 4);
    LAB_00015fe0:
        *(int *)(param_1 + 0x2c) = iVar6 + 1;
        __s1 = (char *)(uint)(byte)pcVar3[iVar6 + 1];
        if ((__s1 == (char *)0x3a || param_2 == (char *)0x0) ||
            (pcVar1 = strchr(param_2, (int)__s1), pcVar1 == (char *)0x0)) {
            cVar13 = pcVar3[iVar6 + 2];
            uVar8 = *(undefined4 *)(param_1 + 8);
            *(char **)(param_1 + 0x18) = __s1;
            if (cVar13 == '\0') {
                *(undefined4 *)(param_1 + 0x2c) = 0;
            }
            pcVar3 = "invalid option \'-%c\'";
            if (cVar13 == '\0') {
                *(int *)(param_1 + 0x14) = iVar10 + 1;
            }
        } else {
            if (pcVar1[1] != ':') {
                if (pcVar3[iVar6 + 2] != '\0') {
                    return __s1;
                }
                *(undefined4 *)(param_1 + 0x2c) = 0;
                *(int *)(param_1 + 0x14) = iVar10 + 1;
                return __s1;
            }
            iVar15 = iVar10 + 1;
            *(int *)(param_1 + 0x14) = iVar15;
            *(undefined4 *)(param_1 + 0x2c) = 0;
            if (pcVar3[iVar6 + 2] != '\0') {
                *(char **)(param_1 + 0xc) = pcVar3 + iVar6 + 2;
                return __s1;
            }
            if (pcVar1[2] == ':') {
                return __s1;
            }
            if (iVar15 < *(int *)(param_1 + 0x20)) {
                uVar8 = *(undefined4 *)(iVar16 + iVar15 * 4);
                *(int *)(param_1 + 0x14) = iVar10 + 2;
                *(undefined4 *)(param_1 + 0xc) = uVar8;
                return __s1;
            }
            *(char **)(param_1 + 0x18) = __s1;
            pcVar3 = "option \'-%c\' requires an argument";
        }
    LAB_00016064:
        pcVar3 = (char *)FUN_0001371c(param_1, uVar8, pcVar3, __s1);
        return pcVar3;
    }
    iVar6 = FUN_000136a8(iVar16, *(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x34), iVar10);
    iVar7 = *(int *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x14) - iVar6;
    *(int *)(param_1 + 0x14) = iVar6;
    *(int *)(param_1 + 0x34) = iVar6;
    *(int *)(param_1 + 0x30) = iVar6;
    iVar10 = iVar6;
    if (iVar15 == 0) {
        iVar16 = *(int *)(param_1 + 0x24);
        iVar2 = iVar6;
        if (iVar6 < iVar7) {
            puVar18 = (undefined4 *)(iVar16 + iVar6 * 4);
            do {
                if ((*(char *)*puVar18 == '-') &&
                    (((char *)*puVar18)[1] != '\0')) {
                    iVar10 = *(int *)(param_1 + 0x14);
                    break;
                }
                iVar2 = iVar2 + 1;
                *(int *)(param_1 + 0x14) = iVar2;
                iVar10 = iVar2;
                puVar18 = puVar18 + 1;
            } while (iVar2 != iVar7);
        }
        *(int *)(param_1 + 0x34) = iVar2;
    } else {
        iVar16 = *(int *)(param_1 + 0x24);
    }
    if (iVar7 <= iVar10) {
        *(int *)(param_1 + 0x14) = iVar6;
        iVar2 = iVar6;
        goto LAB_00016354;
    }
    pcVar3 = *(char **)(iVar16 + iVar10 * 4);
    if (*pcVar3 == '-') {
        if (pcVar3[1] == '-') {
            iVar2 = iVar10 + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            cVar13 = pcVar3[2];
            if (cVar13 == '\0')
                goto LAB_00016354;
            __s1 = pcVar3 + 2;
            if ((cVar13 != '=') && (cVar13 != '#')) {
                pcVar1 = pcVar3 + 3;
                do {
                    pcVar9 = pcVar1;
                    __n = pcVar9 + (-2 - (int)pcVar3);
                    cVar13 = *pcVar9;
                    if (cVar13 == '\0' || cVar13 == '=')
                        break;
                    pcVar1 = pcVar9 + 1;
                } while (cVar13 != '#');
                if ((param_3 != (int *)0x0 && __n != (char *)0x0) &&
                    (pcVar3 = (char *)*param_3, pcVar3 != (char *)0x0)) {
                    uVar17 = 0;
                    local_50 = (int *)0x0;
                    piVar11 = (int *)0x0;
                    piVar14 = param_3;
                    do {
                        iVar15 = strncmp(__s1, pcVar3, (size_t)__n);
                        piVar12 = piVar11;
                        if (iVar15 == 0) {
                            uVar4 = piVar14[1];
                            if (pcVar3[(int)__n] == '\0')
                                goto LAB_000163ac;
                            uVar17 = uVar17 | uVar4 & 0x10;
                            piVar12 = piVar14;
                            if (piVar11 != (int *)0x0) {
                                piVar12 = piVar11;
                                local_50 = piVar14;
                            }
                        }
                        piVar14 = piVar14 + 4;
                    } while ((piVar14 != (int *)0x0) &&
                             (pcVar3 = (char *)*piVar14, piVar11 = piVar12,
                              pcVar3 != (char *)0x0));
                    if (uVar17 != 0) {
                        uVar17 = 1;
                    }
                    if (piVar12 == (int *)0x0) {
                        uVar17 = 1;
                    }
                    if (uVar17 == 0) {
                        if (local_50 != (int *)0x0) {
                            pcVar3 = (char *)FUN_0001371c(
                                param_1, *(undefined4 *)(param_1 + 8),
                                "option \'--%s\' is ambiguous (could be "
                                "\'--%s\' or \'--%s\')",
                                __s1, *piVar12, *local_50);
                            return pcVar3;
                        }
                        uVar4 = piVar12[1];
                        piVar14 = piVar12;
                    LAB_000163ac:
                        uVar4 = uVar4 & 0x2f;
                        if (uVar4 == 2) {
                            if (cVar13 != '\0') {
                                *(char **)(param_1 + 0xc) = pcVar9 + 1;
                            }
                        LAB_000163d4:
                            if (param_4 != (int *)0x0) {
                                *param_4 = (int)piVar14 - (int)param_3 >> 4;
                            }
                            if ((int *)piVar14[2] == (int *)0x0) {
                                return (char *)piVar14[3];
                            }
                            *(int *)piVar14[2] = piVar14[3];
                            return (char *)0x0;
                        }
                        if (uVar4 == 0x21) {
                            if ((cVar13 == '\0') || (pcVar9[1] == '\0')) {
                                pcVar9 = *(char **)(param_1 + 0xc);
                            } else {
                                pcVar9 = pcVar9 + 1;
                                *(char **)(param_1 + 0xc) = pcVar9;
                            }
                            if (pcVar9 == (char *)0x0) {
                                __s1 = (char *)*piVar14;
                                pcVar3 =
                                    "option \'--%s=\' requires an argument";
                                goto LAB_00016064;
                            }
                            goto LAB_000163d4;
                        }
                        if (uVar4 == 1) {
                            if (cVar13 == '\0') {
                                if (iVar2 < iVar7) {
                                    pcVar9 =
                                        *(char **)(iVar16 + iVar10 * 4 + 4);
                                    *(int *)(param_1 + 0x14) = iVar10 + 2;
                                    *(char **)(param_1 + 0xc) = pcVar9;
                                } else {
                                    pcVar9 = *(char **)(param_1 + 0xc);
                                }
                            } else {
                                pcVar9 = pcVar9 + 1;
                                *(char **)(param_1 + 0xc) = pcVar9;
                            }
                            if (pcVar9 != (char *)0x0)
                                goto LAB_000163d4;
                            __s1 = (char *)*piVar14;
                            pcVar3 = "option \'--%s\' requires an argument";
                        } else {
                            if (cVar13 == '\0')
                                goto LAB_000163d4;
                            __s1 = (char *)*piVar14;
                            pcVar3 =
                                "option \'--%s\' doesn\'t allow an argument";
                            uVar8 = *(undefined4 *)(param_1 + 8);
                        }
                        goto LAB_00016064;
                    }
                }
            }
            pcVar3 = "unrecognized option \'--%s\'";
            uVar8 = *(undefined4 *)(param_1 + 8);
            goto LAB_00016064;
        }
        if (pcVar3[1] != '\0') {
            iVar6 = *(int *)(param_1 + 0x2c);
            goto LAB_00015fe0;
        }
    }
    iVar2 = iVar10;
    if (iVar15 == 1) {
        *(char **)(param_1 + 0xc) = pcVar3;
        *(int *)(param_1 + 0x14) = iVar10 + 1;
        return (char *)0x1;
    }
LAB_00016354:
    iVar15 =
        FUN_000136a8(iVar16, iVar6, *(undefined4 *)(param_1 + 0x34), iVar2);
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar15 = *(int *)(param_1 + 0x14) - iVar15;
    *(int *)(param_1 + 0x14) = iVar15;
    *(int *)(param_1 + 0x34) = iVar15;
    *(int *)(param_1 + 0x30) = iVar15;
    return (char *)0xffffffff;
}

undefined4 lzo_pclock_open(int *param_1, int param_2)

{
    int iVar1;
    clock_t cVar2;
    int iVar3;
    undefined4 uVar4;
    char *pcVar5;
    int extraout_r2;
    char *pcVar6;
    code *pcVar7;
    double dVar8;
    undefined8 uVar9;
    undefined8 local_70;
    int local_68;
    rusage local_60;

    param_1[1] = -1;
    param_1[2] = 2;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    switch (param_2) {
    case 0:
        iVar1 = gettimeofday(&local_60.ru_utime, (__timezone_ptr_t)0x0);
        if (iVar1 == 0) {
            param_1[4] = (int)FUN_00013770;
            local_68 = local_60.ru_utime.tv_usec * 1000;
            pcVar5 = "gettimeofday";
            param_1[3] = (int)"gettimeofday";
            local_70 = (longlong)local_60.ru_utime.tv_sec;
            break;
        }
    LAB_00016594:
        pcVar7 = (code *)param_1[4];
        if (pcVar7 == (code *)0x0) {
        LAB_00016758:
            return 0xffffffff;
        }
        pcVar5 = (char *)param_1[3];
        if (*param_1 == 0)
            goto LAB_000166e4;
        goto LAB_000166ec;
    case 1:
        cVar2 = clock();
        dVar8 = ((double)(longlong)cVar2 / 1000000.0) * 1000000000.0;
        uVar9 = FUN_00016f40(SUB84(dVar8, 0), (int)((ulonglong)dVar8 >> 0x20));
        uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
        local_70 = FUN_00016f00((int)uVar9, uVar4, 1000000000, 0);
        FUN_00016f00((int)uVar9, uVar4, 1000000000, 0);
        pcVar5 = "clock";
        param_1[4] = (int)FUN_000137bc;
        param_1[3] = (int)"clock";
        local_68 = extraout_r2;
        break;
    case 2:
        iVar1 = clock_gettime(2, (timespec *)&local_60);
        if (iVar1 != 0) {
            iVar1 = getrusage(RUSAGE_SELF, &local_60);
            if (iVar1 != 0)
                goto LAB_00016594;
            param_1[4] = (int)FUN_000138c0;
            local_68 = local_60.ru_utime.tv_usec * 1000;
            pcVar5 = "getrusage";
            param_1[3] = (int)"getrusage";
            local_70 = (longlong)local_60.ru_utime.tv_sec;
            break;
        }
        pcVar5 = "CLOCK_PROCESS_CPUTIME_ID/libc";
        param_1[3] = (int)"CLOCK_PROCESS_CPUTIME_ID/libc";
        param_1[4] = (int)FUN_00013838;
        iVar1 = *param_1;
        local_70 = (longlong)local_60.ru_utime.tv_sec;
        local_68 = local_60.ru_utime.tv_usec;
        goto joined_r0x00016600;
    case 3:
        iVar1 = clock_gettime(3, (timespec *)&local_60);
        if (iVar1 != 0)
            goto LAB_00016594;
        local_68 = local_60.ru_utime.tv_usec;
        pcVar5 = "CLOCK_THREAD_CPUTIME_ID/libc";
        param_1[4] = (int)FUN_0001387c;
        local_70 = (longlong)local_60.ru_utime.tv_sec;
        param_1[3] = (int)"CLOCK_THREAD_CPUTIME_ID/libc";
        break;
    default:
        goto LAB_00016758;
    }
    iVar1 = *param_1;
joined_r0x00016600:
    if (iVar1 == 0) {
        pcVar7 = (code *)param_1[4];
    LAB_000166e4:
        *param_1 = 1;
    LAB_000166ec:
        pcVar6 = (char *)0x0;
        param_1[2] = 0;
        if (pcVar5 == (char *)0x0) {
            pcVar6 = "unknown";
        }
        param_1[1] = param_2;
        if (pcVar5 == (char *)0x0) {
            param_1[3] = (int)pcVar6;
        }
    } else {
        param_1[1] = param_2;
        param_1[2] = 0;
        pcVar7 = (code *)param_1[4];
    }
    iVar1 = 10;
    do {
        if (pcVar7 == (code *)0x0) {
        LAB_0001673c:
            param_1[2] = 1;
            local_70 = 0;
            local_68 = 0;
        } else {
            iVar3 = (*pcVar7)(param_1, &local_70);
            if (iVar3 != 0)
                goto LAB_0001673c;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0;
        }
        pcVar7 = (code *)param_1[4];
    } while (true);
}

int lzo_pclock_open_default(undefined4 param_1)

{
    int iVar1;

    iVar1 = lzo_pclock_open(param_1, 2);
    if (((iVar1 != 0) && (iVar1 = lzo_pclock_open(param_1, 1), iVar1 != 0)) &&
        (iVar1 = lzo_pclock_open(param_1, 0), iVar1 != 0)) {
        iVar1 = lzo_pclock_open(param_1, 3);
        if (iVar1 != 0) {
            iVar1 = 1;
        }
        return -iVar1;
    }
    return 0;
}

undefined4 lzo_pclock_close(undefined4 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[3] = 0;
    param_1[4] = 0;
    return 0;
}

void lzo_pclock_read(int param_1, undefined4 *param_2)

{
    int iVar1;

    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
        (iVar1 = (**(code **)(param_1 + 0x10))(), iVar1 == 0)) {
        return;
    }
    *(undefined4 *)(param_1 + 8) = 1;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
}

undefined4 lzo_pclock_get_elapsed(int *param_1, undefined4 param_2,
                                  undefined4 param_3)

{
    undefined4 uVar1;

    if (*param_1 != 0) {
        uVar1 = FUN_00014378(param_2, param_3);
        return uVar1;
    }
    param_1[1] = -1;
    return 0;
}

undefined4 lzo_pclock_flush_cpu_cache(void)

{
    return 0xffffffff;
}

void lzo_wildargv(void)

{
    return;
}

ulonglong FUN_00016910(uint param_1, uint param_2)

{
    uint uVar1;
    ulonglong uVar2;

    if (param_2 - 1 == 0) {
        return CONCAT44(param_2, param_1);
    }
    if (param_2 == 0) {
        uVar1 = raise(8);
        return (ulonglong)uVar1;
    }
    if (param_1 <= param_2) {
        return CONCAT44(param_2, (uint)(param_1 == param_2));
    }
    if ((param_2 & param_2 - 1) == 0) {
        return CONCAT44(param_2, param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
    }
    /* WARNING: Could not recover jumptable at 0x00016940. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK_00016948 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar2;
}

ulonglong FUN_00016ea4(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    uVar8 = param_2 & 0x80000000;
    uVar3 = param_2;
    if ((int)uVar8 < 0) {
        bVar11 = param_1 != 0;
        param_1 = -param_1;
        uVar3 = -param_2 - (uint)bVar11;
    }
    iVar7 = 0x432;
    uVar9 = uVar3 >> 0x16;
    if (uVar9 != 0) {
        iVar7 = 3;
        if (uVar3 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (uVar3 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)uVar3 >> 0x1f);
        uVar9 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
        uVar3 = uVar3 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < uVar3) {
        if (0x1fffff < uVar3) {
            uVar4 = uVar3 & 1;
            uVar3 = uVar3 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return (ulonglong)(uVar8 | 0x7ff00000) << 0x20;
            }
        }
    LAB_00016ca0:
        bVar11 = 0x7fffffff < uVar9;
        if (uVar9 == 0x80000000) {
            bVar11 = (param_1 & 1) != 0;
        }
        return CONCAT44(uVar3 + iVar7 * 0x100000 +
                                (uint)CARRY4(param_1, (uint)bVar11) |
                            uVar8,
                        param_1 + bVar11);
    }
    bVar10 = (uVar9 & 0x80000000) != 0;
    uVar9 = uVar9 << 1;
    uVar4 = param_1 * 2;
    bVar11 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar10;
    uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar4, (uint)bVar10));
    iVar7 = iVar7 + -1;
    if ((uVar3 & 0x100000) != 0)
        goto LAB_00016ca0;
    uVar2 = param_1;
    uVar4 = uVar3;
    if (uVar3 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (uVar3 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar12 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar11 = (int)uVar3 < 0;
    bVar10 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar12 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar11 = iVar5 < 0;
        bVar10 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar10 && bVar11 == bVar12) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_00016d18;
        }
    }
    if (bVar10 || bVar11 != bVar12) {
        uVar9 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar10 || bVar11 != bVar12) {
        uVar4 = uVar4 | uVar2 >> (uVar9 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_00016d18:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8, uVar2);
    }
    uVar3 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar3) {
        return CONCAT44(param_2, uVar4 >> (uVar3 - 0x1f & 0xff)) &
               0x80000000ffffffff;
    }
    iVar7 = uVar3 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar3 - 0x1f, 0xc)) {
        uVar3 = uVar3 + 1;
        return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                        uVar2 >> (uVar3 & 0xff) | uVar4
                                                      << (0x20 - uVar3 & 0xff));
    }
    return CONCAT44(param_2, uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                                 uVar4 << (0xcU - iVar7 & 0xff)) &
           0x80000000ffffffff;
}

void FUN_00016f00(undefined4 param_1, undefined4 param_2, int param_3,
                  int param_4)

{
    if ((param_4 == 0) && (param_3 == 0)) {
        raise(8);
        return;
    }
    FUN_00016f80();
    return;
}

undefined8 FUN_00016f40(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    double dVar2;

    dVar2 = (double)CONCAT44(param_2, param_1) * 2.3283064365386963e-10;
    uVar1 = (uint)(0.0 < dVar2) * (int)(longlong)dVar2;
    dVar2 = (double)CONCAT44(param_2, param_1) - (double)uVar1 * 4294967296.0;
    return CONCAT44(uVar1, (uint)(0.0 < dVar2) * (int)(longlong)dVar2);
}

undefined8 FUN_00016f80(uint param_1, uint param_2, uint param_3, uint param_4,
                        uint *param_5)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    bool bVar12;

    bVar12 = param_4 <= param_2;
    if (param_2 == param_4) {
        bVar12 = param_3 <= param_1;
    }
    if (bVar12) {
        iVar10 = LZCOUNT(param_4);
        if (param_4 == 0) {
            iVar10 = LZCOUNT(param_3) + 0x20;
        }
        iVar3 = LZCOUNT(param_2);
        if (param_2 == 0) {
            iVar3 = LZCOUNT(param_1) + 0x20;
        }
        uVar11 = iVar10 - iVar3;
        uVar8 = uVar11 - 0x20;
        uVar9 = 0x20 - uVar11;
        uVar5 = param_3 << (uVar11 & 0xff);
        uVar6 = param_4 << (uVar11 & 0xff) | param_3 << (uVar8 & 0xff) |
                param_3 >> (uVar9 & 0xff);
        bVar12 = uVar6 <= param_2;
        if (param_2 == uVar6) {
            bVar12 = uVar5 <= param_1;
        }
        if (bVar12) {
            bVar12 = param_1 < uVar5;
            param_1 = param_1 - uVar5;
            uVar1 = 1 << (uVar11 & 0xff);
            param_2 = (param_2 - uVar6) - (uint)bVar12;
            uVar2 = 1 << (uVar8 & 0xff) | 1U >> (uVar9 & 0xff);
        } else {
            uVar1 = 0;
            uVar2 = uVar1;
        }
        if (uVar11 != 0) {
            uVar7 = uVar6 >> 1;
            uVar6 = (uint)((uVar6 & 1) != 0) << 0x1f | uVar5 >> 1;
            uVar5 = uVar11;
            do {
                while (true) {
                    bVar12 = uVar7 <= param_2;
                    if (param_2 == uVar7) {
                        bVar12 = uVar6 <= param_1;
                    }
                    if (bVar12)
                        break;
                    bVar12 = CARRY4(param_1, param_1);
                    param_1 = param_1 * 2;
                    param_2 = param_2 * 2 + (uint)bVar12;
                    uVar5 = uVar5 - 1;
                    uVar4 = param_2;
                    if (uVar5 == 0)
                        goto LAB_0001702a;
                }
                bVar12 = param_1 < uVar6;
                uVar4 = param_1 - uVar6;
                param_1 = uVar4 * 2 + 1;
                param_2 = ((param_2 - uVar7) - (uint)bVar12) * 2 +
                          (uint)CARRY4(uVar4, uVar4) +
                          (uint)(0xfffffffe < uVar4 * 2);
                uVar5 = uVar5 - 1;
                uVar4 = param_2;
            } while (uVar5 != 0);
        LAB_0001702a:
            param_2 = uVar4 >> (uVar11 & 0xff);
            bVar12 = CARRY4(uVar1, param_1);
            uVar5 = uVar1 + param_1;
            param_1 = param_1 >> (uVar11 & 0xff) | uVar4 << (uVar9 & 0xff) |
                      uVar4 >> (uVar8 & 0xff);
            uVar6 = param_1 << (uVar11 & 0xff);
            uVar1 = uVar5 - uVar6;
            uVar2 = ((uVar4 + uVar2 + bVar12) -
                     (param_2 << (uVar11 & 0xff) |
                      param_1 << (uVar11 - 0x20 & 0xff) |
                      param_1 >> (0x20 - uVar11 & 0xff))) -
                    (uint)(uVar5 < uVar6);
        }
    } else {
        uVar1 = 0;
        uVar2 = uVar1;
    }
    if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
    }
    return CONCAT44(uVar2, uVar1);
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}
