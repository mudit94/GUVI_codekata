import { SimpleCalculatorPage } from './app.po';

describe('simple-calculator App', function() {
  let page: SimpleCalculatorPage;

  beforeEach(() => {
    page = new SimpleCalculatorPage();
  });

  it('should display message saying app works', () => {
    page.navigateTo();
    expect(page.getParagraphText()).toEqual('app works!');
  });
});
