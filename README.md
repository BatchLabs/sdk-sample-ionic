
# Batch-Ionic-Sample

Sample project using  [Batch.com](https://batch.com/) platform built with Ionic framework. 

## Getting Started

### Prerequisites
-   Install Node.js 
-   Install Android Studio and platform dependencies
-   Install xCode and platform dependencies
-   Install nvm - node version manager

This sample run on: 

- @ionic/angular 4.0.0-beta.2
- Ionic CLI : 4.1.1
- Cordova CLI : 8.0.0
- NodeJS : 8.11.4 LTS
- Xcode : 9.3.1
- Android SDK Tools : 26.1.1

### Installing

1. Install the the latest beta version of the Ionic CLI globally:
```
npm install -g ionic@4.1.1
```
2.  Install Cordova globally:
```
npm install -g cordova
```
3. Run `npm install` from the project root and install the dependencies:
```
npm install 
```


_Note: You may need to add “sudo” in front of any global commands to install the utilities._

## Troubleshooting

Maybe during your `npm install`, some modules like `node-sass` may fail during installation. You can see an EACCES error when you try to install a package globally

To fix this issue, you need to follow this article from NPM: https://docs.npmjs.com/getting-started/fixing-npm-permissions. 
The best solution is to install [NVM](https://github.com/creationix/nvm), this is the best way to avoid permissions issues.

Once, you have installed  NVM, you can update NPM using this following command: 

```
npm install npm@latest -g 
```

and run 

3. Run `npm install` from the project root and install the dependencies:
```
npm install 
```

## Configuration of Batch service 

Once, you have installed your dependencies you have to add your API key on Batch service folder(src/app/batch). 

```javascript
import { Injectable } from '@angular/core';

declare var batch;

@Injectable({
  providedIn: 'root'
})
export class BatchService {

  constructor() { }
  batchStarter(){
    batch.setConfig({"iOSAPIKey":"KEY API IOS" , "androidAPIKey":"Key API Android"});
    batch.start();
    batch.push.registerForRemoteNotifications();
 }
}

```

## Deployment
As you may know, you can also test right in the simulator using the cordova commands

For iOS:
```
ionic cordova platform add ios
ionic cordova run ios
```
For Android:
```
ionic cordova platform add Android
ionic cordova run Android
```

Or you can run it on a real device using Xcode or Android Studio (strongly recommended). 



## Built With

* [Ionic-Angular](https://ionicframework.com/) - The hybrid framework used
* [Batch](https://batch.com) - Batch push provider

 



