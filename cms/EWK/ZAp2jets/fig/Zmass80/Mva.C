void Mva()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Oct 10 16:36:54 2018) by ROOT version6.06/01
   TCanvas *c1 = new TCanvas("c1", "",0,0,900,600);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-25,-859.6291,225,7736.661);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   
   TH1F *hs_stack_1 = new TH1F("hs_stack_1","",200,0,200);
   hs_stack_1->SetMinimum(0);
   hs_stack_1->SetMaximum(6877.032);
   hs_stack_1->SetDirectory(0);
   hs_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_1->SetLineColor(ci);
   hs_stack_1->GetXaxis()->SetLabelFont(42);
   hs_stack_1->GetXaxis()->SetLabelSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleSize(0.035);
   hs_stack_1->GetXaxis()->SetTitleFont(42);
   hs_stack_1->GetYaxis()->SetLabelFont(42);
   hs_stack_1->GetYaxis()->SetLabelSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleSize(0.035);
   hs_stack_1->GetYaxis()->SetTitleFont(42);
   hs_stack_1->GetZaxis()->SetLabelFont(42);
   hs_stack_1->GetZaxis()->SetLabelSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleSize(0.035);
   hs_stack_1->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_1);
   
   
   TH1D *hh__1 = new TH1D("hh__1","Mva",200,0,200);
   hh__1->SetBinContent(0,3845.267);
   hh__1->SetBinContent(84,0.1917597);
   hh__1->SetBinContent(85,0.2762632);
   hh__1->SetBinContent(86,0.7214483);
   hh__1->SetBinContent(87,0.9571972);
   hh__1->SetBinContent(88,1.551724);
   hh__1->SetBinContent(89,8.548784);
   hh__1->SetBinContent(90,14.79338);
   hh__1->SetBinContent(91,17.09163);
   hh__1->SetBinContent(92,37.75017);
   hh__1->SetBinContent(93,43.04985);
   hh__1->SetBinContent(94,37.43558);
   hh__1->SetBinContent(95,39.35869);
   hh__1->SetBinContent(96,32.44296);
   hh__1->SetBinContent(97,35.66648);
   hh__1->SetBinContent(98,33.79916);
   hh__1->SetBinContent(99,53.59728);
   hh__1->SetBinContent(100,45.93474);
   hh__1->SetBinContent(101,55.34548);
   hh__1->SetBinContent(102,59.7248);
   hh__1->SetBinContent(103,71.66628);
   hh__1->SetBinContent(104,80.41118);
   hh__1->SetBinContent(105,96.35431);
   hh__1->SetBinContent(106,115.6783);
   hh__1->SetBinContent(107,158.3808);
   hh__1->SetBinContent(108,181.2113);
   hh__1->SetBinContent(109,203.28);
   hh__1->SetBinContent(110,221.5288);
   hh__1->SetBinContent(111,265.8171);
   hh__1->SetBinContent(112,286.7558);
   hh__1->SetBinContent(113,279.2242);
   hh__1->SetBinContent(114,304.5887);
   hh__1->SetBinContent(115,314.2655);
   hh__1->SetBinContent(116,325.6655);
   hh__1->SetBinContent(117,318.0551);
   hh__1->SetBinContent(118,299.2731);
   hh__1->SetBinContent(119,291.2784);
   hh__1->SetBinContent(120,294.5604);
   hh__1->SetBinContent(121,287.8514);
   hh__1->SetBinContent(122,280.2074);
   hh__1->SetBinContent(123,287.652);
   hh__1->SetBinContent(124,270.3);
   hh__1->SetBinContent(125,288.6095);
   hh__1->SetBinContent(126,250.6297);
   hh__1->SetBinContent(127,265.0024);
   hh__1->SetBinContent(128,250.3447);
   hh__1->SetBinContent(129,260.1471);
   hh__1->SetBinContent(130,259.7106);
   hh__1->SetBinContent(131,232.0248);
   hh__1->SetBinContent(132,213.2403);
   hh__1->SetBinContent(133,200.3238);
   hh__1->SetBinContent(134,198.1143);
   hh__1->SetBinContent(135,203.7294);
   hh__1->SetBinContent(136,206.1211);
   hh__1->SetBinContent(137,196.8632);
   hh__1->SetBinContent(138,169.1724);
   hh__1->SetBinContent(139,173.7495);
   hh__1->SetBinContent(140,184.998);
   hh__1->SetBinContent(141,176.9533);
   hh__1->SetBinContent(142,164.2345);
   hh__1->SetBinContent(143,153.2069);
   hh__1->SetBinContent(144,161.5457);
   hh__1->SetBinContent(145,153.1941);
   hh__1->SetBinContent(146,139.8457);
   hh__1->SetBinContent(147,148.8804);
   hh__1->SetBinContent(148,142.836);
   hh__1->SetBinContent(149,145.0292);
   hh__1->SetBinContent(150,141.4748);
   hh__1->SetBinContent(151,136.6892);
   hh__1->SetBinContent(152,122.9655);
   hh__1->SetBinContent(153,120.0752);
   hh__1->SetBinContent(154,120.3006);
   hh__1->SetBinContent(155,114.7315);
   hh__1->SetBinContent(156,112.862);
   hh__1->SetBinContent(157,103.8319);
   hh__1->SetBinContent(158,113.4793);
   hh__1->SetBinContent(159,99.26151);
   hh__1->SetBinContent(160,102.6327);
   hh__1->SetBinContent(161,100.2832);
   hh__1->SetBinContent(162,105.0964);
   hh__1->SetBinContent(163,94.01993);
   hh__1->SetBinContent(164,96.67501);
   hh__1->SetBinContent(165,87.29191);
   hh__1->SetBinContent(166,83.02758);
   hh__1->SetBinContent(167,86.29083);
   hh__1->SetBinContent(168,82.5253);
   hh__1->SetBinContent(169,85.68649);
   hh__1->SetBinContent(170,75.55783);
   hh__1->SetBinContent(171,55.51962);
   hh__1->SetBinContent(172,65.80047);
   hh__1->SetBinContent(173,70.46287);
   hh__1->SetBinContent(174,74.50341);
   hh__1->SetBinContent(175,73.49428);
   hh__1->SetBinContent(176,66.53164);
   hh__1->SetBinContent(177,64.33217);
   hh__1->SetBinContent(178,56.7763);
   hh__1->SetBinContent(179,58.37325);
   hh__1->SetBinContent(180,64.20251);
   hh__1->SetBinContent(181,63.36901);
   hh__1->SetBinContent(182,60.3676);
   hh__1->SetBinContent(183,52.72532);
   hh__1->SetBinContent(184,50.52862);
   hh__1->SetBinContent(185,61.75924);
   hh__1->SetBinContent(186,51.1302);
   hh__1->SetBinContent(187,45.77119);
   hh__1->SetBinContent(188,46.82045);
   hh__1->SetBinContent(189,51.04467);
   hh__1->SetBinContent(190,50.92939);
   hh__1->SetBinContent(191,51.25203);
   hh__1->SetBinContent(192,46.83454);
   hh__1->SetBinContent(193,40.88353);
   hh__1->SetBinContent(194,42.96367);
   hh__1->SetBinContent(195,40.10332);
   hh__1->SetBinContent(196,45.33783);
   hh__1->SetBinContent(197,42.40088);
   hh__1->SetBinContent(198,51.44327);
   hh__1->SetBinContent(199,40.55204);
   hh__1->SetBinContent(200,36.8876);
   hh__1->SetBinContent(201,2397.917);
   hh__1->SetBinError(0,39.48663);
   hh__1->SetBinError(84,0.1917597);
   hh__1->SetBinError(85,0.2762632);
   hh__1->SetBinError(86,0.4167164);
   hh__1->SetBinError(87,0.779874);
   hh__1->SetBinError(88,1.007772);
   hh__1->SetBinError(89,1.706926);
   hh__1->SetBinError(90,2.825998);
   hh__1->SetBinError(91,3.551757);
   hh__1->SetBinError(92,4.543751);
   hh__1->SetBinError(93,4.682794);
   hh__1->SetBinError(94,4.575933);
   hh__1->SetBinError(95,4.367463);
   hh__1->SetBinError(96,4.229408);
   hh__1->SetBinError(97,4.006555);
   hh__1->SetBinError(98,4.185568);
   hh__1->SetBinError(99,4.677073);
   hh__1->SetBinError(100,4.557359);
   hh__1->SetBinError(101,4.753293);
   hh__1->SetBinError(102,5.045916);
   hh__1->SetBinError(103,5.477924);
   hh__1->SetBinError(104,5.80934);
   hh__1->SetBinError(105,6.353296);
   hh__1->SetBinError(106,6.794536);
   hh__1->SetBinError(107,7.637718);
   hh__1->SetBinError(108,8.2982);
   hh__1->SetBinError(109,9.149046);
   hh__1->SetBinError(110,9.522617);
   hh__1->SetBinError(111,10.1347);
   hh__1->SetBinError(112,10.17415);
   hh__1->SetBinError(113,10.23825);
   hh__1->SetBinError(114,10.77302);
   hh__1->SetBinError(115,10.69827);
   hh__1->SetBinError(116,10.9038);
   hh__1->SetBinError(117,10.70148);
   hh__1->SetBinError(118,10.52432);
   hh__1->SetBinError(119,10.55766);
   hh__1->SetBinError(120,10.47225);
   hh__1->SetBinError(121,10.37621);
   hh__1->SetBinError(122,10.08791);
   hh__1->SetBinError(123,10.0961);
   hh__1->SetBinError(124,10.0561);
   hh__1->SetBinError(125,10.10875);
   hh__1->SetBinError(126,9.473941);
   hh__1->SetBinError(127,9.745853);
   hh__1->SetBinError(128,9.756958);
   hh__1->SetBinError(129,9.496164);
   hh__1->SetBinError(130,9.526614);
   hh__1->SetBinError(131,9.296397);
   hh__1->SetBinError(132,8.888331);
   hh__1->SetBinError(133,8.939687);
   hh__1->SetBinError(134,8.659114);
   hh__1->SetBinError(135,8.576771);
   hh__1->SetBinError(136,8.668087);
   hh__1->SetBinError(137,8.341604);
   hh__1->SetBinError(138,8.187812);
   hh__1->SetBinError(139,8.139819);
   hh__1->SetBinError(140,8.234605);
   hh__1->SetBinError(141,8.116925);
   hh__1->SetBinError(142,7.930452);
   hh__1->SetBinError(143,7.644789);
   hh__1->SetBinError(144,7.79328);
   hh__1->SetBinError(145,7.657847);
   hh__1->SetBinError(146,7.278792);
   hh__1->SetBinError(147,7.257919);
   hh__1->SetBinError(148,7.265406);
   hh__1->SetBinError(149,7.288165);
   hh__1->SetBinError(150,7.16063);
   hh__1->SetBinError(151,7.127422);
   hh__1->SetBinError(152,6.690342);
   hh__1->SetBinError(153,6.882692);
   hh__1->SetBinError(154,6.816619);
   hh__1->SetBinError(155,6.68685);
   hh__1->SetBinError(156,6.604417);
   hh__1->SetBinError(157,6.293041);
   hh__1->SetBinError(158,6.508877);
   hh__1->SetBinError(159,6.196783);
   hh__1->SetBinError(160,6.141747);
   hh__1->SetBinError(161,6.048409);
   hh__1->SetBinError(162,6.21316);
   hh__1->SetBinError(163,5.96803);
   hh__1->SetBinError(164,5.914894);
   hh__1->SetBinError(165,5.6925);
   hh__1->SetBinError(166,5.647104);
   hh__1->SetBinError(167,5.863716);
   hh__1->SetBinError(168,5.701405);
   hh__1->SetBinError(169,5.61741);
   hh__1->SetBinError(170,5.336881);
   hh__1->SetBinError(171,5.021517);
   hh__1->SetBinError(172,5.194709);
   hh__1->SetBinError(173,5.369164);
   hh__1->SetBinError(174,5.201824);
   hh__1->SetBinError(175,5.250837);
   hh__1->SetBinError(176,4.908399);
   hh__1->SetBinError(177,4.9802);
   hh__1->SetBinError(178,4.857607);
   hh__1->SetBinError(179,4.994591);
   hh__1->SetBinError(180,4.964751);
   hh__1->SetBinError(181,4.914241);
   hh__1->SetBinError(182,4.686671);
   hh__1->SetBinError(183,4.645979);
   hh__1->SetBinError(184,4.487507);
   hh__1->SetBinError(185,4.577665);
   hh__1->SetBinError(186,4.510191);
   hh__1->SetBinError(187,4.25266);
   hh__1->SetBinError(188,4.259877);
   hh__1->SetBinError(189,4.327589);
   hh__1->SetBinError(190,4.481281);
   hh__1->SetBinError(191,4.368702);
   hh__1->SetBinError(192,4.160422);
   hh__1->SetBinError(193,4.111153);
   hh__1->SetBinError(194,4.096394);
   hh__1->SetBinError(195,4.024898);
   hh__1->SetBinError(196,4.345564);
   hh__1->SetBinError(197,4.043398);
   hh__1->SetBinError(198,4.328792);
   hh__1->SetBinError(199,3.983332);
   hh__1->SetBinError(200,3.764029);
   hh__1->SetBinError(201,31.67923);
   hh__1->SetEntries(138842);
   hh__1->SetDirectory(0);
   hh__1->SetStats(0);
   hh__1->SetFillColor(2);
   hh__1->SetLineColor(2);
   hh__1->GetXaxis()->SetLabelFont(42);
   hh__1->GetXaxis()->SetLabelSize(0.035);
   hh__1->GetXaxis()->SetTitleSize(0.035);
   hh__1->GetXaxis()->SetTitleFont(42);
   hh__1->GetYaxis()->SetLabelFont(42);
   hh__1->GetYaxis()->SetLabelSize(0.035);
   hh__1->GetYaxis()->SetTitleSize(0.035);
   hh__1->GetYaxis()->SetTitleFont(42);
   hh__1->GetZaxis()->SetLabelFont(42);
   hh__1->GetZaxis()->SetLabelSize(0.035);
   hh__1->GetZaxis()->SetTitleSize(0.035);
   hh__1->GetZaxis()->SetTitleFont(42);
   hs->Add(hh,"");
   
   TH1D *hh__2 = new TH1D("hh__2","Mva",200,0,200);
   hh__2->SetBinContent(0,85589.88);
   hh__2->SetBinContent(42,1.486288);
   hh__2->SetBinContent(43,1.486288);
   hh__2->SetBinContent(51,1.486901);
   hh__2->SetBinContent(53,2.83298);
   hh__2->SetBinContent(54,3.097226);
   hh__2->SetBinContent(55,6.038879);
   hh__2->SetBinContent(56,6.937703);
   hh__2->SetBinContent(57,7.921293);
   hh__2->SetBinContent(58,8.993253);
   hh__2->SetBinContent(59,5.05158);
   hh__2->SetBinContent(60,16.64293);
   hh__2->SetBinContent(61,18.72466);
   hh__2->SetBinContent(62,18.44413);
   hh__2->SetBinContent(63,19.58931);
   hh__2->SetBinContent(64,22.83269);
   hh__2->SetBinContent(65,20.78297);
   hh__2->SetBinContent(66,40.79355);
   hh__2->SetBinContent(67,33.06998);
   hh__2->SetBinContent(68,31.85651);
   hh__2->SetBinContent(69,30.2956);
   hh__2->SetBinContent(70,60.8832);
   hh__2->SetBinContent(71,72.36062);
   hh__2->SetBinContent(72,66.26233);
   hh__2->SetBinContent(73,61.95573);
   hh__2->SetBinContent(74,104.4255);
   hh__2->SetBinContent(75,94.01173);
   hh__2->SetBinContent(76,113.7258);
   hh__2->SetBinContent(77,136.7064);
   hh__2->SetBinContent(78,134.8587);
   hh__2->SetBinContent(79,179.2324);
   hh__2->SetBinContent(80,248.1012);
   hh__2->SetBinContent(81,262.5217);
   hh__2->SetBinContent(82,285.7253);
   hh__2->SetBinContent(83,354.1272);
   hh__2->SetBinContent(84,486.614);
   hh__2->SetBinContent(85,679.8133);
   hh__2->SetBinContent(86,951.2457);
   hh__2->SetBinContent(87,1338.164);
   hh__2->SetBinContent(88,1973.751);
   hh__2->SetBinContent(89,3170.261);
   hh__2->SetBinContent(90,4674.409);
   hh__2->SetBinContent(91,6532.463);
   hh__2->SetBinContent(92,6432.198);
   hh__2->SetBinContent(93,4937.191);
   hh__2->SetBinContent(94,2944.097);
   hh__2->SetBinContent(95,2043.582);
   hh__2->SetBinContent(96,1283.526);
   hh__2->SetBinContent(97,1036.039);
   hh__2->SetBinContent(98,906.7401);
   hh__2->SetBinContent(99,832.9141);
   hh__2->SetBinContent(100,966.8461);
   hh__2->SetBinContent(101,1056.507);
   hh__2->SetBinContent(102,1276.462);
   hh__2->SetBinContent(103,1468.684);
   hh__2->SetBinContent(104,1528.65);
   hh__2->SetBinContent(105,1588.315);
   hh__2->SetBinContent(106,1641.7);
   hh__2->SetBinContent(107,1599.16);
   hh__2->SetBinContent(108,1598.644);
   hh__2->SetBinContent(109,1520.269);
   hh__2->SetBinContent(110,1615.011);
   hh__2->SetBinContent(111,1464.703);
   hh__2->SetBinContent(112,1429.177);
   hh__2->SetBinContent(113,1358.695);
   hh__2->SetBinContent(114,1366.649);
   hh__2->SetBinContent(115,1192.448);
   hh__2->SetBinContent(116,1204.471);
   hh__2->SetBinContent(117,1129.924);
   hh__2->SetBinContent(118,1083.448);
   hh__2->SetBinContent(119,1023.654);
   hh__2->SetBinContent(120,1018.141);
   hh__2->SetBinContent(121,934.5357);
   hh__2->SetBinContent(122,861.6057);
   hh__2->SetBinContent(123,834.6361);
   hh__2->SetBinContent(124,820.2439);
   hh__2->SetBinContent(125,827.5159);
   hh__2->SetBinContent(126,747.2696);
   hh__2->SetBinContent(127,711.0338);
   hh__2->SetBinContent(128,695.5248);
   hh__2->SetBinContent(129,697.4789);
   hh__2->SetBinContent(130,671.3985);
   hh__2->SetBinContent(131,582.3786);
   hh__2->SetBinContent(132,536.2615);
   hh__2->SetBinContent(133,571.9134);
   hh__2->SetBinContent(134,554.6485);
   hh__2->SetBinContent(135,499.7489);
   hh__2->SetBinContent(136,493.6515);
   hh__2->SetBinContent(137,487.9964);
   hh__2->SetBinContent(138,451.4831);
   hh__2->SetBinContent(139,405.3724);
   hh__2->SetBinContent(140,428.6487);
   hh__2->SetBinContent(141,420.875);
   hh__2->SetBinContent(142,440.9017);
   hh__2->SetBinContent(143,372.7845);
   hh__2->SetBinContent(144,340.5605);
   hh__2->SetBinContent(145,368.7846);
   hh__2->SetBinContent(146,347.6439);
   hh__2->SetBinContent(147,303.6619);
   hh__2->SetBinContent(148,322.6649);
   hh__2->SetBinContent(149,279.0642);
   hh__2->SetBinContent(150,291.2239);
   hh__2->SetBinContent(151,272.6627);
   hh__2->SetBinContent(152,252.6805);
   hh__2->SetBinContent(153,257.4222);
   hh__2->SetBinContent(154,256.1599);
   hh__2->SetBinContent(155,252.3351);
   hh__2->SetBinContent(156,271.728);
   hh__2->SetBinContent(157,226.2147);
   hh__2->SetBinContent(158,261.4561);
   hh__2->SetBinContent(159,188.321);
   hh__2->SetBinContent(160,222.0969);
   hh__2->SetBinContent(161,201.4323);
   hh__2->SetBinContent(162,179.4584);
   hh__2->SetBinContent(163,194.0081);
   hh__2->SetBinContent(164,145.0578);
   hh__2->SetBinContent(165,190.9);
   hh__2->SetBinContent(166,167.2718);
   hh__2->SetBinContent(167,168.8788);
   hh__2->SetBinContent(168,170.0158);
   hh__2->SetBinContent(169,163.3071);
   hh__2->SetBinContent(170,155.8395);
   hh__2->SetBinContent(171,124.5278);
   hh__2->SetBinContent(172,140.1663);
   hh__2->SetBinContent(173,124.177);
   hh__2->SetBinContent(174,98.54423);
   hh__2->SetBinContent(175,139.0987);
   hh__2->SetBinContent(176,136.1617);
   hh__2->SetBinContent(177,111.366);
   hh__2->SetBinContent(178,116.5903);
   hh__2->SetBinContent(179,117.2825);
   hh__2->SetBinContent(180,101.0441);
   hh__2->SetBinContent(181,95.21472);
   hh__2->SetBinContent(182,76.71855);
   hh__2->SetBinContent(183,75.20334);
   hh__2->SetBinContent(184,77.63493);
   hh__2->SetBinContent(185,83.60128);
   hh__2->SetBinContent(186,65.41829);
   hh__2->SetBinContent(187,78.79447);
   hh__2->SetBinContent(188,87.33362);
   hh__2->SetBinContent(189,70.81816);
   hh__2->SetBinContent(190,73.14547);
   hh__2->SetBinContent(191,84.41421);
   hh__2->SetBinContent(192,72.95873);
   hh__2->SetBinContent(193,63.74268);
   hh__2->SetBinContent(194,72.51603);
   hh__2->SetBinContent(195,61.18605);
   hh__2->SetBinContent(196,77.12048);
   hh__2->SetBinContent(197,49.67008);
   hh__2->SetBinContent(198,57.00678);
   hh__2->SetBinContent(199,62.03571);
   hh__2->SetBinContent(200,53.96639);
   hh__2->SetBinContent(201,2131.549);
   hh__2->SetBinError(0,357.324);
   hh__2->SetBinError(42,1.486288);
   hh__2->SetBinError(43,1.486288);
   hh__2->SetBinError(51,1.486901);
   hh__2->SetBinError(53,2.03561);
   hh__2->SetBinError(54,2.190215);
   hh__2->SetBinError(55,3.023695);
   hh__2->SetBinError(56,3.159732);
   hh__2->SetBinError(57,3.547586);
   hh__2->SetBinError(58,3.679888);
   hh__2->SetBinError(59,2.830471);
   hh__2->SetBinError(60,5.030675);
   hh__2->SetBinError(61,5.369373);
   hh__2->SetBinError(62,5.345698);
   hh__2->SetBinError(63,5.364321);
   hh__2->SetBinError(64,5.906658);
   hh__2->SetBinError(65,5.63695);
   hh__2->SetBinError(66,7.753539);
   hh__2->SetBinError(67,7.006535);
   hh__2->SetBinError(68,6.871772);
   hh__2->SetBinError(69,6.758415);
   hh__2->SetBinError(70,9.618846);
   hh__2->SetBinError(71,10.48858);
   hh__2->SetBinError(72,10.00486);
   hh__2->SetBinError(73,9.530021);
   hh__2->SetBinError(74,12.66973);
   hh__2->SetBinError(75,12.02054);
   hh__2->SetBinError(76,13.01461);
   hh__2->SetBinError(77,14.53856);
   hh__2->SetBinError(78,14.36674);
   hh__2->SetBinError(79,16.44205);
   hh__2->SetBinError(80,19.33517);
   hh__2->SetBinError(81,19.88899);
   hh__2->SetBinError(82,20.70578);
   hh__2->SetBinError(83,23.0192);
   hh__2->SetBinError(84,27.08434);
   hh__2->SetBinError(85,32.14215);
   hh__2->SetBinError(86,38.06193);
   hh__2->SetBinError(87,45.02338);
   hh__2->SetBinError(88,54.6585);
   hh__2->SetBinError(89,69.34603);
   hh__2->SetBinError(90,84.23539);
   hh__2->SetBinError(91,99.63944);
   hh__2->SetBinError(92,98.79694);
   hh__2->SetBinError(93,86.62178);
   hh__2->SetBinError(94,66.88584);
   hh__2->SetBinError(95,55.61273);
   hh__2->SetBinError(96,43.97065);
   hh__2->SetBinError(97,39.53325);
   hh__2->SetBinError(98,36.98682);
   hh__2->SetBinError(99,35.45705);
   hh__2->SetBinError(100,38.15657);
   hh__2->SetBinError(101,39.70449);
   hh__2->SetBinError(102,43.74723);
   hh__2->SetBinError(103,46.92806);
   hh__2->SetBinError(104,47.71042);
   hh__2->SetBinError(105,48.75559);
   hh__2->SetBinError(106,49.54292);
   hh__2->SetBinError(107,48.92575);
   hh__2->SetBinError(108,48.84743);
   hh__2->SetBinError(109,47.63989);
   hh__2->SetBinError(110,49.311);
   hh__2->SetBinError(111,46.83138);
   hh__2->SetBinError(112,46.22847);
   hh__2->SetBinError(113,45.07019);
   hh__2->SetBinError(114,45.21078);
   hh__2->SetBinError(115,42.13701);
   hh__2->SetBinError(116,42.46223);
   hh__2->SetBinError(117,41.01737);
   hh__2->SetBinError(118,40.2719);
   hh__2->SetBinError(119,39.23284);
   hh__2->SetBinError(120,39.06345);
   hh__2->SetBinError(121,37.51311);
   hh__2->SetBinError(122,35.94633);
   hh__2->SetBinError(123,35.31249);
   hh__2->SetBinError(124,35.15887);
   hh__2->SetBinError(125,35.27152);
   hh__2->SetBinError(126,33.34821);
   hh__2->SetBinError(127,32.69676);
   hh__2->SetBinError(128,32.26351);
   hh__2->SetBinError(129,32.40557);
   hh__2->SetBinError(130,31.76925);
   hh__2->SetBinError(131,29.50937);
   hh__2->SetBinError(132,28.3557);
   hh__2->SetBinError(133,29.35079);
   hh__2->SetBinError(134,28.81107);
   hh__2->SetBinError(135,27.33566);
   hh__2->SetBinError(136,27.31931);
   hh__2->SetBinError(137,27.08813);
   hh__2->SetBinError(138,26.0561);
   hh__2->SetBinError(139,24.50578);
   hh__2->SetBinError(140,25.41742);
   hh__2->SetBinError(141,25.11051);
   hh__2->SetBinError(142,25.77231);
   hh__2->SetBinError(143,23.65676);
   hh__2->SetBinError(144,22.51962);
   hh__2->SetBinError(145,23.50519);
   hh__2->SetBinError(146,22.86207);
   hh__2->SetBinError(147,21.25845);
   hh__2->SetBinError(148,22.00793);
   hh__2->SetBinError(149,20.35157);
   hh__2->SetBinError(150,20.84356);
   hh__2->SetBinError(151,20.17319);
   hh__2->SetBinError(152,19.4353);
   hh__2->SetBinError(153,19.54598);
   hh__2->SetBinError(154,19.57931);
   hh__2->SetBinError(155,19.47784);
   hh__2->SetBinError(156,20.1679);
   hh__2->SetBinError(157,18.52591);
   hh__2->SetBinError(158,19.75965);
   hh__2->SetBinError(159,16.78345);
   hh__2->SetBinError(160,18.38968);
   hh__2->SetBinError(161,17.3297);
   hh__2->SetBinError(162,16.47872);
   hh__2->SetBinError(163,17.03861);
   hh__2->SetBinError(164,14.69176);
   hh__2->SetBinError(165,16.84061);
   hh__2->SetBinError(166,15.72293);
   hh__2->SetBinError(167,15.87039);
   hh__2->SetBinError(168,15.9152);
   hh__2->SetBinError(169,15.66143);
   hh__2->SetBinError(170,15.36979);
   hh__2->SetBinError(171,13.66614);
   hh__2->SetBinError(172,14.60841);
   hh__2->SetBinError(173,13.55134);
   hh__2->SetBinError(174,12.26817);
   hh__2->SetBinError(175,14.4223);
   hh__2->SetBinError(176,14.28817);
   hh__2->SetBinError(177,12.8832);
   hh__2->SetBinError(178,13.34164);
   hh__2->SetBinError(179,13.23847);
   hh__2->SetBinError(180,12.30301);
   hh__2->SetBinError(181,11.95173);
   hh__2->SetBinError(182,10.7318);
   hh__2->SetBinError(183,10.53878);
   hh__2->SetBinError(184,10.69052);
   hh__2->SetBinError(185,11.1819);
   hh__2->SetBinError(186,9.856757);
   hh__2->SetBinError(187,10.95855);
   hh__2->SetBinError(188,11.54101);
   hh__2->SetBinError(189,10.23382);
   hh__2->SetBinError(190,10.52976);
   hh__2->SetBinError(191,11.35098);
   hh__2->SetBinError(192,10.44392);
   hh__2->SetBinError(193,9.836097);
   hh__2->SetBinError(194,10.52527);
   hh__2->SetBinError(195,9.488466);
   hh__2->SetBinError(196,10.68632);
   hh__2->SetBinError(197,8.58325);
   hh__2->SetBinError(198,9.214528);
   hh__2->SetBinError(199,9.609645);
   hh__2->SetBinError(200,8.994303);
   hh__2->SetBinError(201,56.65173);
   hh__2->SetEntries(133893);
   hh__2->SetStats(0);
   hh__2->SetFillColor(3);
   hh__2->SetLineColor(3);
   hh__2->GetXaxis()->SetLabelFont(42);
   hh__2->GetXaxis()->SetLabelSize(0.035);
   hh__2->GetXaxis()->SetTitleSize(0.035);
   hh__2->GetXaxis()->SetTitleFont(42);
   hh__2->GetYaxis()->SetLabelFont(42);
   hh__2->GetYaxis()->SetLabelSize(0.035);
   hh__2->GetYaxis()->SetTitleSize(0.035);
   hh__2->GetYaxis()->SetTitleFont(42);
   hh__2->GetZaxis()->SetLabelFont(42);
   hh__2->GetZaxis()->SetLabelSize(0.035);
   hh__2->GetZaxis()->SetTitleSize(0.035);
   hh__2->GetZaxis()->SetTitleFont(42);
   hs->Add(hh,"");
   hs->Draw(" hist");
   
   TH1D *h__3 = new TH1D("h__3","Mva",200,0,200);
   h__3->SetBinContent(0,105954);
   h__3->SetBinContent(18,1);
   h__3->SetBinContent(19,1);
   h__3->SetBinContent(20,3);
   h__3->SetBinContent(21,2);
   h__3->SetBinContent(22,4);
   h__3->SetBinContent(23,5);
   h__3->SetBinContent(24,3);
   h__3->SetBinContent(25,3);
   h__3->SetBinContent(26,4);
   h__3->SetBinContent(27,11);
   h__3->SetBinContent(28,7);
   h__3->SetBinContent(29,2);
   h__3->SetBinContent(30,18);
   h__3->SetBinContent(31,6);
   h__3->SetBinContent(32,7);
   h__3->SetBinContent(33,8);
   h__3->SetBinContent(34,12);
   h__3->SetBinContent(35,14);
   h__3->SetBinContent(36,9);
   h__3->SetBinContent(37,12);
   h__3->SetBinContent(38,14);
   h__3->SetBinContent(39,14);
   h__3->SetBinContent(40,12);
   h__3->SetBinContent(41,15);
   h__3->SetBinContent(42,19);
   h__3->SetBinContent(43,16);
   h__3->SetBinContent(44,19);
   h__3->SetBinContent(45,15);
   h__3->SetBinContent(46,18);
   h__3->SetBinContent(47,21);
   h__3->SetBinContent(48,31);
   h__3->SetBinContent(49,34);
   h__3->SetBinContent(50,38);
   h__3->SetBinContent(51,18);
   h__3->SetBinContent(52,36);
   h__3->SetBinContent(53,28);
   h__3->SetBinContent(54,38);
   h__3->SetBinContent(55,39);
   h__3->SetBinContent(56,45);
   h__3->SetBinContent(57,44);
   h__3->SetBinContent(58,47);
   h__3->SetBinContent(59,53);
   h__3->SetBinContent(60,51);
   h__3->SetBinContent(61,70);
   h__3->SetBinContent(62,78);
   h__3->SetBinContent(63,61);
   h__3->SetBinContent(64,71);
   h__3->SetBinContent(65,69);
   h__3->SetBinContent(66,68);
   h__3->SetBinContent(67,68);
   h__3->SetBinContent(68,82);
   h__3->SetBinContent(69,90);
   h__3->SetBinContent(70,90);
   h__3->SetBinContent(71,97);
   h__3->SetBinContent(72,105);
   h__3->SetBinContent(73,106);
   h__3->SetBinContent(74,132);
   h__3->SetBinContent(75,107);
   h__3->SetBinContent(76,155);
   h__3->SetBinContent(77,152);
   h__3->SetBinContent(78,177);
   h__3->SetBinContent(79,221);
   h__3->SetBinContent(80,218);
   h__3->SetBinContent(81,258);
   h__3->SetBinContent(82,322);
   h__3->SetBinContent(83,367);
   h__3->SetBinContent(84,518);
   h__3->SetBinContent(85,624);
   h__3->SetBinContent(86,867);
   h__3->SetBinContent(87,1290);
   h__3->SetBinContent(88,1910);
   h__3->SetBinContent(89,3027);
   h__3->SetBinContent(90,4597);
   h__3->SetBinContent(91,6178);
   h__3->SetBinContent(92,6076);
   h__3->SetBinContent(93,4664);
   h__3->SetBinContent(94,2847);
   h__3->SetBinContent(95,1853);
   h__3->SetBinContent(96,1197);
   h__3->SetBinContent(97,996);
   h__3->SetBinContent(98,894);
   h__3->SetBinContent(99,917);
   h__3->SetBinContent(100,1010);
   h__3->SetBinContent(101,1169);
   h__3->SetBinContent(102,1411);
   h__3->SetBinContent(103,1607);
   h__3->SetBinContent(104,1794);
   h__3->SetBinContent(105,1893);
   h__3->SetBinContent(106,1809);
   h__3->SetBinContent(107,1809);
   h__3->SetBinContent(108,1739);
   h__3->SetBinContent(109,1699);
   h__3->SetBinContent(110,1647);
   h__3->SetBinContent(111,1537);
   h__3->SetBinContent(112,1465);
   h__3->SetBinContent(113,1453);
   h__3->SetBinContent(114,1331);
   h__3->SetBinContent(115,1275);
   h__3->SetBinContent(116,1196);
   h__3->SetBinContent(117,1170);
   h__3->SetBinContent(118,1105);
   h__3->SetBinContent(119,1087);
   h__3->SetBinContent(120,1025);
   h__3->SetBinContent(121,998);
   h__3->SetBinContent(122,960);
   h__3->SetBinContent(123,878);
   h__3->SetBinContent(124,875);
   h__3->SetBinContent(125,803);
   h__3->SetBinContent(126,811);
   h__3->SetBinContent(127,778);
   h__3->SetBinContent(128,731);
   h__3->SetBinContent(129,697);
   h__3->SetBinContent(130,704);
   h__3->SetBinContent(131,622);
   h__3->SetBinContent(132,649);
   h__3->SetBinContent(133,608);
   h__3->SetBinContent(134,611);
   h__3->SetBinContent(135,516);
   h__3->SetBinContent(136,529);
   h__3->SetBinContent(137,519);
   h__3->SetBinContent(138,492);
   h__3->SetBinContent(139,509);
   h__3->SetBinContent(140,469);
   h__3->SetBinContent(141,426);
   h__3->SetBinContent(142,453);
   h__3->SetBinContent(143,406);
   h__3->SetBinContent(144,417);
   h__3->SetBinContent(145,382);
   h__3->SetBinContent(146,361);
   h__3->SetBinContent(147,363);
   h__3->SetBinContent(148,342);
   h__3->SetBinContent(149,375);
   h__3->SetBinContent(150,337);
   h__3->SetBinContent(151,307);
   h__3->SetBinContent(152,297);
   h__3->SetBinContent(153,320);
   h__3->SetBinContent(154,255);
   h__3->SetBinContent(155,267);
   h__3->SetBinContent(156,236);
   h__3->SetBinContent(157,256);
   h__3->SetBinContent(158,254);
   h__3->SetBinContent(159,229);
   h__3->SetBinContent(160,227);
   h__3->SetBinContent(161,231);
   h__3->SetBinContent(162,196);
   h__3->SetBinContent(163,209);
   h__3->SetBinContent(164,227);
   h__3->SetBinContent(165,199);
   h__3->SetBinContent(166,174);
   h__3->SetBinContent(167,155);
   h__3->SetBinContent(168,142);
   h__3->SetBinContent(169,160);
   h__3->SetBinContent(170,185);
   h__3->SetBinContent(171,177);
   h__3->SetBinContent(172,133);
   h__3->SetBinContent(173,162);
   h__3->SetBinContent(174,122);
   h__3->SetBinContent(175,116);
   h__3->SetBinContent(176,138);
   h__3->SetBinContent(177,152);
   h__3->SetBinContent(178,150);
   h__3->SetBinContent(179,125);
   h__3->SetBinContent(180,120);
   h__3->SetBinContent(181,121);
   h__3->SetBinContent(182,121);
   h__3->SetBinContent(183,107);
   h__3->SetBinContent(184,120);
   h__3->SetBinContent(185,92);
   h__3->SetBinContent(186,108);
   h__3->SetBinContent(187,101);
   h__3->SetBinContent(188,110);
   h__3->SetBinContent(189,103);
   h__3->SetBinContent(190,91);
   h__3->SetBinContent(191,79);
   h__3->SetBinContent(192,61);
   h__3->SetBinContent(193,80);
   h__3->SetBinContent(194,93);
   h__3->SetBinContent(195,92);
   h__3->SetBinContent(196,70);
   h__3->SetBinContent(197,69);
   h__3->SetBinContent(198,66);
   h__3->SetBinContent(199,80);
   h__3->SetBinContent(200,70);
   h__3->SetBinContent(201,3490);
   h__3->SetEntries(207467);
   h__3->SetStats(0);
   h__3->SetMarkerStyle(20);
   h__3->GetXaxis()->SetLabelFont(42);
   h__3->GetXaxis()->SetLabelSize(0.035);
   h__3->GetXaxis()->SetTitleSize(0.035);
   h__3->GetXaxis()->SetTitleFont(42);
   h__3->GetYaxis()->SetLabelFont(42);
   h__3->GetYaxis()->SetLabelSize(0.035);
   h__3->GetYaxis()->SetTitleSize(0.035);
   h__3->GetYaxis()->SetTitleFont(42);
   h__3->GetZaxis()->SetLabelFont(42);
   h__3->GetZaxis()->SetLabelSize(0.035);
   h__3->GetZaxis()->SetTitleSize(0.035);
   h__3->GetZaxis()->SetTitleFont(42);
   h__3->Draw("same PE");
   
   TLegend *leg = new TLegend(0.7,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","ZA","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","ZJets","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
