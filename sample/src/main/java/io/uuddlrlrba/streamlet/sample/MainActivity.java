package io.uuddlrlrba.streamlet.sample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import io.uuddlrlrba.streamlet.Hello;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Hello.sayHello(Hello.getSecret());
    }
}
