﻿using UnityEngine;
using System.Collections;

public class Music : MonoBehaviour {

	// Use this for initialization
    public static int[] music;
    public static int[] sky = {26,27,31,27,31,33,27,23,23,26,31,25,23,23,24,23,24,31,23,31,31,31 ,27,24,24,27,27,26,27,31,27,31,33,27,23,23,26,25,26,31,25,23,
                              21,24,27,27,31,31,32,33,31,31,27,26,26,27,25};

    public static int[] ff = {26,27,31,27,31,32,33,34,33,32,33,32,31,27,31,27,26,25,26,27,31,27,31,32,33,34,33,32,33,32,32,27,25,26};
    public static int[] sumer = { 26,33,36,33,24,31,34,21,25,32,25,32,31,35,31,35,26,33,36,33,34,31,34,31,25,32,35,32,31,25,31,32,33,32,31,31,31,25,31,32,33,32,
                                    31,32,32,33,33,33,25,31,32,33,32,31,32,31,25,31,32,33,32,31,32,32,35,33,33,33,34,35,35,35,35,35,35,33,31,31,33,34,35,35,35,35,35,35,33,
                                31,31,31,32,33,33,33,33,33,33,36,36,33,32,31,32};
    public static int[] kanong = {35,33,34,35,33,34,35,25,26,27,31,32,33,34, 33,31,32,33,23,24,25,26,25,24,25,23,24,25,24,25,26,24,22,23,22,21,22,23,24,25,26,24,26,
                                 25,26,27,31,25,26,27,31,32,33,34,35,33,31,32,33,32,31,32,27,31,32,33,32,31,27,31,26,27,31,21,22,23,24,23,22,23,31
                                 };
    public static void randonMusic()
    {
        int i = Random.Range(1,5);
        switch(i)
        {
            case 1:
                music =sky;
                break;
            case 2:
                music = ff;
                break;
            case 3:
                music = sumer;
                break;
            case 4:
                music = kanong;
                break;
            default:
                music = kanong;
                break;
        }
        
    }

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
