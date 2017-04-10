var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
import { Component } from '@angular/core';
var AppComponent = (function () {
    function AppComponent() {
        this.resultText = "";
        this.flag = 1;
    }
    AppComponent.prototype.callMe = function (event) {
        if (this.flag == 1)
            this.resultText = this.resultText + event;
        else {
            this.resultText = event;
            this.flag = 1;
        }
        if (this.resultText.length > 15) {
            this.resultText = "out of limit";
        }
    };
    AppComponent.prototype.erase = function () {
        this.resultText = "";
    };
    AppComponent.prototype.add = function (operand) {
        this.resultText = this.resultText + "" + operand;
        this.flag = 1;
    };
    AppComponent.prototype.equals = function () {
        this.resultText = eval(this.resultText);
        this.flag = 0;
    };
    return AppComponent;
}());
AppComponent = __decorate([
    Component({
        selector: 'app-root',
        templateUrl: './app.component.html',
        styleUrls: ['./app.component.css']
    })
], AppComponent);
export { AppComponent };
//# sourceMappingURL=../../../../../src/app/app.component.js.map