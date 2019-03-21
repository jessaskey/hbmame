// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/rabbit.cpp"

// PSmame (c) gaston90 used with permission

 /****************************************************
         Proyecto Shadows Mame Build Plus
*****************************************************/

 /******
 Rabbit
*********/

ROM_START( rabbits01 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE( "jpr0_ps01.0", 0x000000, 0x080000, CRC(3be967ee) SHA1(3d048dd674516b79cd0d2d6f2bc88e0c93ee6ee8) )
	ROM_LOAD32_BYTE( "jpr1_ps01.1", 0x000001, 0x080000, CRC(56e1f900) SHA1(15b0c249cf5f3b127a12eaa44ab61a19170c3f08) )
	ROM_LOAD32_BYTE( "jpr2_ps01.2", 0x000002, 0x080000, CRC(e01d4b54) SHA1(a55e1e960e614ec8fac05dff58b184612bb0faad) )
	ROM_LOAD32_BYTE( "jpr3_ps01.3", 0x000003, 0x080000, CRC(bb176c24) SHA1(4185769bb519dbaf53b6997851367883339dbfbc) )

	ROM_REGION( 0x9000000, "test", ROMREGION_ERASE )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jsn0.11", 0x0800002, 0x400000, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x2000002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x2000000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )
	ROM_LOAD16_BYTE( "jbg0.40", 0x4000001, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD16_BYTE( "jbg1.50", 0x6000000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD16_BYTE( "jbg2.60", 0x8000001, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x1000000, "gfx1", 0 )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x0800002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x0800000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )


	ROM_REGION( 0x600000, "gfx2", 0 )
	ROM_LOAD( "jbg0.40", 0x000000, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD( "jbg1.50", 0x200000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD( "jbg2.60", 0x400000, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x400000, "i5000snd", ROMREGION_ERASE )
	ROM_LOAD( "jsn0.11", 0x000000, 0x000018, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_CONTINUE(        0x000000, 0x3fffe8 )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "rabbit.nv", 0x0000, 0x0080, CRC(73d471ed) SHA1(45e045f5ea9036342b88013e021d402741d98537) )
ROM_END

ROM_START( rabbits02 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE( "jpr0_ps02.0", 0x000000, 0x080000, CRC(a838827e) SHA1(2c6135c4a01b402ccd71586c5422dfc07fbb882d) )
	ROM_LOAD32_BYTE( "jpr1_ps02.1", 0x000001, 0x080000, CRC(e49cb55c) SHA1(cf5ce5a51b5cc32b7962c0484bef9f5746343157) )
	ROM_LOAD32_BYTE( "jpr2_ps02.2", 0x000002, 0x080000, CRC(ae05dee8) SHA1(da83bb58f4f3b9ed0da06ddea62be7abca9b3281) )
	ROM_LOAD32_BYTE( "jpr3.3", 0x000003, 0x080000, CRC(d22727ca) SHA1(8415cb2d3864b11fe5623ac65f2e28fd62c61bd1) )

	ROM_REGION( 0x9000000, "test", ROMREGION_ERASE )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jsn0.11", 0x0800002, 0x400000, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x2000002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x2000000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )
	ROM_LOAD16_BYTE( "jbg0.40", 0x4000001, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD16_BYTE( "jbg1.50", 0x6000000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD16_BYTE( "jbg2.60", 0x8000001, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x1000000, "gfx1", 0 )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x0800002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x0800000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )


	ROM_REGION( 0x600000, "gfx2", 0 )
	ROM_LOAD( "jbg0.40", 0x000000, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD( "jbg1.50", 0x200000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD( "jbg2.60", 0x400000, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x400000, "i5000snd", ROMREGION_ERASE )
	ROM_LOAD( "jsn0.11", 0x000000, 0x000018, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_CONTINUE(        0x000000, 0x3fffe8 )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "rabbit.nv", 0x0000, 0x0080, CRC(73d471ed) SHA1(45e045f5ea9036342b88013e021d402741d98537) )
ROM_END

ROM_START( rabbits03 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE( "jpr0_ps03.0", 0x000000, 0x080000, CRC(4c279f17) SHA1(04a12975b35bdd401082bc86b5388cbced6857ed) )
	ROM_LOAD32_BYTE( "jpr1_ps03.1", 0x000001, 0x080000, CRC(5ef56df4) SHA1(620a901c7b403ab385c34e282cb32f4f8fd66ba4) )
	ROM_LOAD32_BYTE( "jpr2_ps03.2", 0x000002, 0x080000, CRC(f16d18c1) SHA1(1d9d4c040307e2cf5ca4e388f422f46e2d163818) )
	ROM_LOAD32_BYTE( "jpr3_ps03.3", 0x000003, 0x080000, CRC(e19860b0) SHA1(a2186e7c41d06728503397aa45e3737be6f830c9) )

	ROM_REGION( 0x9000000, "test", ROMREGION_ERASE )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jsn0.11", 0x0800002, 0x400000, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x2000002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x2000000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )
	ROM_LOAD16_BYTE( "jbg0.40", 0x4000001, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD16_BYTE( "jbg1.50", 0x6000000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD16_BYTE( "jbg2.60", 0x8000001, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x1000000, "gfx1", 0 )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x0800002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x0800000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )


	ROM_REGION( 0x600000, "gfx2", 0 )
	ROM_LOAD( "jbg0.40", 0x000000, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD( "jbg1.50", 0x200000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD( "jbg2.60", 0x400000, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x400000, "i5000snd", ROMREGION_ERASE )
	ROM_LOAD( "jsn0.11", 0x000000, 0x000018, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_CONTINUE(        0x000000, 0x3fffe8 )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "rabbit.nv", 0x0000, 0x0080, CRC(73d471ed) SHA1(45e045f5ea9036342b88013e021d402741d98537) )
ROM_END

ROM_START( rabbits04 )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE( "jpr0_ps04.0", 0x000000, 0x080000, CRC(dff67a87) SHA1(d60332ce38a5edc89b636c89cfed30d9ab6e2e91) )
	ROM_LOAD32_BYTE( "jpr1_ps04.1", 0x000001, 0x080000, CRC(ec8821a8) SHA1(82c1886ad08a871cc990c7d5be4fb4da11b82615) )
	ROM_LOAD32_BYTE( "jpr2_ps04.2", 0x000002, 0x080000, CRC(bf758d7d) SHA1(46036bbc7f8d5a9c7fa51e9c3b296a786e086e50) )
	ROM_LOAD32_BYTE( "jpr3_ps04.3", 0x000003, 0x080000, CRC(88a82b5e) SHA1(afc6d99e16eaf4b1eba7d1aeebffb4b6575b4900) )

	ROM_REGION( 0x9000000, "test", ROMREGION_ERASE )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jsn0.11", 0x0800002, 0x400000, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x2000002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x2000000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )
	ROM_LOAD16_BYTE( "jbg0.40", 0x4000001, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD16_BYTE( "jbg1.50", 0x6000000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD16_BYTE( "jbg2.60", 0x8000001, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x1000000, "gfx1", 0 )
	ROM_LOAD32_WORD( "jfv0.00", 0x0000002, 0x400000, CRC(b2a4d3d3) SHA1(0ab71d82a37ff94442b91712a28d3470619ba575) )
	ROM_LOAD32_WORD( "jfv1.01", 0x0000000, 0x400000, CRC(83f3926e) SHA1(b1c479e675d35fc08c9a7648ff40348a24654e7e) )
	ROM_LOAD32_WORD( "jfv2.02", 0x0800002, 0x400000, CRC(b264bfb5) SHA1(8fafedb6af74150465b1773e80aef0edc3da4678) )
	ROM_LOAD32_WORD( "jfv3.03", 0x0800000, 0x400000, CRC(3e1a9be2) SHA1(2082a4ae8cda84cec5ea0fc08753db387bb70d41) )


	ROM_REGION( 0x600000, "gfx2", 0 )
	ROM_LOAD( "jbg0.40", 0x000000, 0x200000, CRC(89662944) SHA1(ca916ba38480fa588af19fc9682603f5195ad6c7) )
	ROM_LOAD( "jbg1.50", 0x200000, 0x200000, CRC(1fc7f6e0) SHA1(b36062d2a9683683ffffd3003d5244a185f53280) )
	ROM_LOAD( "jbg2.60", 0x400000, 0x200000, CRC(aee265fc) SHA1(ec420ab30b9b5141162223fc1fbf663ad9f211e6) )

	ROM_REGION( 0x400000, "i5000snd", ROMREGION_ERASE )
	ROM_LOAD( "jsn0.11", 0x000000, 0x000018, CRC(e1f726e8) SHA1(598d75f3ff9e43ec8ce6131ed37f4345bf2f2d8e) )
	ROM_CONTINUE(        0x000000, 0x3fffe8 )

	ROM_REGION16_BE( 0x80, "eeprom", 0 )
	ROM_LOAD( "rabbit.nv", 0x0000, 0x0080, CRC(73d471ed) SHA1(45e045f5ea9036342b88013e021d402741d98537) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Rabbit
GAME( 200?, rabbits01,      rabbit, rabbit,  rabbit, rabbit_state, init_rabbit, ROT0, "DDJ", "Rabbit (Enable Hidden Character)(Asia 3/6)", MACHINE_IMPERFECT_GRAPHICS | MACHINE_IMPERFECT_SOUND | MACHINE_SUPPORTS_SAVE )
GAME( 200?, rabbits02,      rabbit, rabbit,  rabbit, rabbit_state, init_rabbit, ROT0, "DDJ", "Rabbit (Easy Move)(Asia 3/6)", MACHINE_IMPERFECT_GRAPHICS | MACHINE_IMPERFECT_SOUND | MACHINE_SUPPORTS_SAVE )
GAME( 200?, rabbits03,      rabbit, rabbit,  rabbit, rabbit_state, init_rabbit, ROT0, "DDJ", "Rabbit (Infinite Power Player 1)(Asia 3/6)", MACHINE_IMPERFECT_GRAPHICS | MACHINE_IMPERFECT_SOUND | MACHINE_SUPPORTS_SAVE )
GAME( 200?, rabbits04,      rabbit, rabbit,  rabbit, rabbit_state, init_rabbit, ROT0, "DDJ", "Rabbit (Description Unknown)(Asia 3/6)", MACHINE_IMPERFECT_GRAPHICS | MACHINE_IMPERFECT_SOUND | MACHINE_SUPPORTS_SAVE )


